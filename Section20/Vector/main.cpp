#include <iostream>
#include <vector>
#include <algorithm>

class Person {
    std::string name;
    int age;
    friend std::ostream &operator<< (std::ostream &stream, const Person &p);
    
public:
    Person () = default;
    Person (std::string name, int age)
        : name {name}, age {age} {}
        
    // ALWAYS OVERLOAD
    bool operator< (const Person &other) const {return age < other.age;}
    bool operator== (const Person & other) const {return age == other.age;}
    
};

std::ostream &operator<< (std::ostream &stream, const Person &p){
    stream << p.name << ":" << p.age;
    return stream;
}

// generic display function using for_each
template<typename T>
void display(const std::vector<T> &vec){
    std::cout << "[ ";
    // note: lambdas have no return type (is deduced by compiler)
    std::for_each(vec.begin(), vec.end(), 
                   [] (T x) {std::cout << x << " ";});
    std::cout << " ]" << std::endl;
}

void test0() {
    std::cout << "Test 0" << std::endl;
    std::vector<int> v {1,2,3,4,5};
    display(v);
    
    v = {2,3,4,5,6,7};
    display(v);
    
    std::vector<int> v1 (10, 100); // ten 100s
    display(v1); // no need to pass template parameter, compiler can deduce for simple function
    
    std::cout << std::endl << std::endl;
}

void test1() {
    std::cout << "Test 0" << std::endl;
    std::vector<int> v {1,2,3,4,5};
    display(v);
    
    std::cout << "Vec size: " << v.size() << std::endl;
    std::cout << "Vec max size: " << v.max_size() << std::endl;
    std::cout << "Vec capacity: " << v.capacity() << std::endl;
    
    v.push_back(6);
    display(v);
    std::cout << "Vec size: " << v.size() << std::endl;
    std::cout << "Vec max size: " << v.max_size() << std::endl;
    std::cout << "Vec capacity: " << v.capacity() << std::endl;
    
    std::cout << std::endl << "Shrink to fit" << std::endl;
    v.shrink_to_fit();
    display(v);
    std::cout << "Vec size: " << v.size() << std::endl;
    std::cout << "Vec max size: " << v.max_size() << std::endl;
    std::cout << "Vec capacity: " << v.capacity() << std::endl;
    
    std::cout << std::endl << "Reserve" << std::endl;
    v.reserve(100);
    display(v);
    std::cout << "Vec size: " << v.size() << std::endl;
    std::cout << "Vec max size: " << v.max_size() << std::endl;
    std::cout << "Vec capacity: " << v.capacity() << std::endl;
    
    std::cout << std::endl << std::endl;
}

void test2() {
    std::cout << "Test 2" << std::endl;
    std::vector<int> v {1,2,3,4,5};
    display(v);
    
    v.at(1) = 200;
    
    display(v);
    
    std::cout << std::endl << std::endl;
}

void test3() {
    std::cout << "Test 3" << std::endl;
    std::vector<Person> cats;
    display(cats);
    
    Person c1 {"Oscar", 9};
    display(cats);
    
    cats.push_back(c1);
    display(cats);
    
    cats.push_back( Person {"Jacques", 4} );
    display(cats);
    
    cats.emplace_back("Simba", 5); // most efficient
    display(cats);
    
    std::cout << std::endl << std::endl;
}

void test4() {
    std::cout << "Test 4" << std::endl;
    std::vector<Person> cats {
        {"Oscar", 4},
        {"Pete", 11},
        {"Leo", 12},
        };
    display(cats);
    
    std::cout << "Cats front: " << cats.front() << std::endl;
    std::cout << "Cats back: " << cats.back() << std::endl;
    
    cats.pop_back();
    display(cats);
    
    std::cout << std::endl << std::endl;
}

void test5() {
    std::cout << "Test 5" << std::endl;
    std::vector<int> v {1,2,3,4,5};
    display(v);
    
    v.clear();
    display(v);
    
    std::cout << std::endl << std::endl;
    
    v = {1,2,3,4,5,6,7,8,9,10};
    display(v);
    // can use erase with obtained beginning and end values
    v.erase(v.begin(), v.begin() + 2);
    display(v);
    
    v = {1,2,3,4,5,6,7,8,9,10};
    
    // erase all even numbers
    auto it = v.begin();
    while (it != v.end()){
        if (*it%2 == 0)
            v.erase(it); // value of an iterator without dereference is the element's memory location
        else
            ++it;
    }
    display(v);
    
    std::cout << std::endl << std::endl;
    
}

void test6() {
    std::cout << "Test 6" << std::endl;
    std::vector<int> v1 {1,2,3,4,5};
    std::vector<int> v2 {5,4,3,2,1};
    display(v1);
    display(v2);
    
    std::swap(v1, v2);
    // v1.swap(v2);
    display(v1);
    display(v2);
    
    std::cout << std::endl << std::endl;
}

void test7() {
    std::cout << "Test 7" << std::endl;
    std::vector<int> v {100, 50, 666, 77, 12};
    display(v);
    
    std::sort(v.begin(), v.end());
    std::reverse(v.begin(), v.end());
    display(v);
    
    std::cout << std::endl << std::endl;
}

void test8() {
    std::cout << "Test 8" << std::endl;
    std::vector<int> v1 {1,2,3,4,5};
    std::vector<int> v2 {6,7,8,9,10};
    display(v1);
    display(v2);
    
    // append all elements of v2 to the end of v1
    // append to the argument of std::back_inserter
    std::copy(v2.begin(), v2.end(), std::back_inserter(v1));
    display(v1);
    display(v2);
    
    v1 = {1,2,3,4,5};
    v2 = {6,7,8,9,10};
    
    // copy only even elements of v2 into v1
    std::copy_if(v2.begin(), v2.end(), std::back_inserter(v1),
                    [] (int x) {return x%2 == 0;});
    display(v1);
    display(v2);
    
    std::cout << std::endl << std::endl;
}

void test9() {
    std::cout << "Test 9" << std::endl;
    std::vector<int> v1 {1,2,3,4,5};
    std::vector<int> v2 {6,7,8,9,10};
    std::vector<int> v3;
    
    std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), 
                    [] (int x, int y) {return x*y;});

    display(v3);
    
    
    std::cout << std::endl << std::endl;
}

void test10() {
    std::cout << "Test 10" << std::endl;
    std::vector<int> v1 {1,2,3,4,5};
    std::vector<int> v2 {600,700,800,900,1000};
    
    display(v1);
    display(v2);
    std::cout << std::endl;
    
    // look for 5
    auto it = std::find(std::begin(v1), std::end(v1), 5);
    // if 5 is found
    if (it != v1.end()){
        std::cout << "Inserting...." << std::endl;
        // insert all of vec 2 to index value it
        v1.insert(it, v2.begin(), v2.end());
    } else
        std::cout << "Sorry, 5 not found." << std::endl;
    
    display(v1);
    
    std::cout << std::endl << std::endl;
}



int main(){
    test0();
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    
    return 0;
    
}