#include <iostream>
#include <queue>

class Person {
    std::string name;
    int age;
    friend std::ostream &operator<< (std::ostream &stream, const Person &p);
    
public:
    Person (std::string name = "Unknown", int age = 0)
        : name {name}, age {age} {}
        
    // PRIORITY QUEUE NEEDS < IMPLEMENTED FOR SORTING
    bool operator< (const Person &other) const {return age < other.age;}
    
    bool operator== (const Person & other) const {return age == other.age;}
    
};

std::ostream &operator<< (std::ostream &stream, const Person &p){
    stream << p.name << ":" << p.age;
    return stream;
}

// pass by value again to not destroy queue
template<class T>
void display(std::priority_queue<T> pq){
    std::cout << "[ ";
    while (!pq.empty()){
        T el {pq.top()};
        pq.pop();
        std::cout << el << " ";
    }
    std::cout << "]" << std::endl;
}

void test0() {
    std::cout << "Test 0" << std::endl;
    std::priority_queue<int> pq;
    
    // duplicates don't matter in pq
    for (auto i: {12,312,6,5,4,8759,8,67,6,24,13,41,2,2,6,56})
        pq.push(i);
    
    std::cout << "Size: " << pq.size() << std::endl;
    std::cout << "Top: " << pq.top() << std::endl;
    
    // will be sorted, largest first
    display(pq);
    
    pq.pop();
    display(pq);
    
    
    std::cout << std::endl;
}

void test1() {
    std::cout << "Test 1" << std::endl;
    std::priority_queue<Person> pq;
    
    // emplace is more efficient than pushing objects
    pq.emplace("Oscar", 4);
    pq.emplace("Jacques", 8);
    pq.emplace("Simba", 5);
    pq.emplace("Leo", 11);
    pq.emplace("Charles", 7);
    pq.emplace("Pete", 9);
    pq.emplace("Othello", 5);
    
    // sorted by age
    display(pq);
    
    std::cout << std::endl;
}

int main(){
    test0();
    test1();
    
    return 0;
    
}