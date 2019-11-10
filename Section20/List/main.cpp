#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

class Person {
    std::string name;
    int age;
    friend std::ostream &operator<< (std::ostream &stream, const Person &p);
    
public:
    // need to provide defaults for list resizing
    // single constructor with defaults is enough
    Person (std::string name = "Unknown", int age = 0)
        : name {name}, age {age} {}
        
    // ALWAYS OVERLOAD for STL algorithms
    bool operator< (const Person &other) const {return age < other.age;}
    bool operator== (const Person & other) const {return age == other.age;}
    
};

std::ostream &operator<< (std::ostream &stream, const Person &p){
    stream << p.name << ":" << p.age;
    return stream;
}


template<typename T>
void display(const std::list<T> &l){
    std::cout << "[ ";
    std::for_each(l.begin(), l.end(), 
                   [] (T x) {std::cout << x << " ";});
    std::cout << " ]" << std::endl;
}

void test0() {
    std::cout << "Test 0" << std::endl;
    
    std::list<int> l1 {1,2,3,4,5};
    display(l1);
    
    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::cout << std::endl;
}

void test1() {
    std::cout << "Test 1" << std::endl;
    
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::cout << "list size: " << l.size() << std::endl;
    
    std::cout << "list front: " << l.front() << std::endl;
    std::cout << "list back: " << l.back() << std::endl;
    
    l.clear();
    display(l);
    std::cout << "list size: " << l.size() << std::endl;
    
    std::cout << std::endl;
}

void test2() {
    std::cout << "Test 2" << std::endl;
    
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l);
    
    l.resize(10);
    display(l);
    
    std::list<Person> cats;
    cats.resize(5); // uses default constructor
    display(cats);
    
    std::cout << std::endl;
}

void test3() {
    std::cout << "Test 3" << std::endl;
    
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    auto it = std::find(std::begin(l), std::end(l), 5);
    if (it != std::end(l))
        // insert needs to know where to insert
        // iterator points to 5, so 100 is goint to be inserted BEFORE 5
        l.insert(it, 100);
    display(l);
    
    std::list<int> l2 {1000, 2000, 3000};
    // inserts all of l2 into l1
    // notice: it still points to the 5!
    l.insert(it, std::begin(l2), std::end(l2));
    display(l);
    
    // advance iterator by -4, i.e. move fourr to the front
    std::advance(it, -4); // points to 100
    std::cout << *it << std::endl;
    
    l.erase(it); // erases 100, iterator is now invalid
    display(l);
    
    std::cout << std::endl;
}

void test4() {
    std::cout << "Test 4" << std::endl;
    
    std::list <Person> cats {
        {"Oscar", 4},
        {"Jacques", 8},
        {"Charles", 7}
    };
    
    display(cats);
    std::string name;
    int age {};
    std::cout << "Enter the name of the next cat: ";
    std::getline(std::cin, name);
    std::cout << "Enter it's age: ";
    std::cin >> age;
    
    cats.emplace_back(name, age);
    display(cats);
    
    // insertion again
    auto it = std::find(std::begin(cats), std::end(cats), Person{"Jacques", 8});
    if (it != std::end(cats))
        cats.insert(it, Person{"Frank", 70});
    
    display(cats);
    
    
    std::cout << std::endl;
}

void test5() {
    std::cout << "Test 5" << std::endl;
    
    std::list <Person> cats {
        {"Oscar", 4},
        {"Jacques", 8},
        {"Charles", 7}
    };
    
    display(cats);
    cats.sort(); // have to use the method here, std::sort DOESNT WORK (needs -)
    display(cats);
    
    
    std::cout << std::endl;
}

int main(){
    test0();
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
    
}