#include <set>
#include <string>
#include <iostream>
#include <iomanip>

class Person {
    std::string name;
    int age;
    friend std::ostream &operator<< (std::ostream &stream, const Person &p);
    
public:
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
void display(const std::set<T> &s){
    std::cout << "[ ";
    // type in this loop is const int! auto works, T does not (type deduction)
    for (auto &ele: s){
        std::cout << ele << " ";
    }
    std::cout << " ]" << std::endl;
}

void test0 () {
    std::cout << "Test 0" << std::endl;
    std::set<int> s1 {1,4,3,2,5};
    display(s1);
    
    s1 = {1,1,1,1,2,2,2,2,2,4,3,3,3,2};
    display(s1);
    
    s1.insert(0);
    s1.insert(100);
    
    display(s1);
    
    if (s1.count(1))
        std::cout << "1 is in the set." << std::endl;
    else
        std::cout << "1 is NOT in the set." << std::endl;
        
    auto it = s1.find(4); // use .find() instead of std::find()
    if (it != std::end(s1))
        std::cout << *it << " has been found." << std::endl;
        
    s1.clear();
    
    std::cout << std::endl;
}

void test1 () {
    std::cout << "Test 1" << std::endl;
    std::set<Person> cats {
        	{"Charles", 9},
            {"Pete", 8},
            {"Samson", 17}
    };
    
    display(cats);
    cats.emplace("Oscar", 4);
    display(cats);
    
    cats.emplace("Simba", 4);
    display(cats);
    
    auto it {cats.find(Person{"Charles", 9})};
    if (it != cats.end())
        cats.erase(it);
        
    display(cats);
    
    it = cats.find(Person{"XXXX", 17});
    // erases Samson because we use the overloaded age operator for our search, name is irrelevant!
    if (it != std::end(cats))
        cats.erase(it);
    
    display(cats);
    
    std::cout << std::endl;
}

void test2 () {
    std::cout << "Test 2" << std::endl;
    std::set<std::string> s {"A", "B", "C"};
    display(s);
    
    auto result = s.insert("D");
    display(s);
    
    std::cout << std::boolalpha;
    // cannot use arrow notation here because it's an iterator
    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;
    
    result = s.insert("A");
    display(s);
    
    std::cout << std::boolalpha;
    std::cout << "First: " << *(result.first) << std::endl; // iterator dereferencing
    std::cout << "Second: " << result.second << std::endl;
    
    std::cout << std::endl;
}

int main(){
    test0();
    test1();
    test2();
    
    return 0;
    
}