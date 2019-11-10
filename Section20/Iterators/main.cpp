#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <list>
#include <string>

void display_vec (const std::vector<int> &vec){
    std::cout << "[ ";
    for (const int &ele: vec)
        std::cout << ele << " ";
    std::cout << "]" << std::endl;
}

void test1 () {
    std::cout << "TEST 1" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    auto it {nums1.begin()}; // auto makes this really easy to use
    
    // need to derefence iterator as it points to container elements
    std::cout << *it << std::endl;
    
    ++it;
    std::cout << *it << std::endl;
    
    it += 2;
    std::cout << *it << std::endl;
    
    it -= 2;
    std::cout << *it << std::endl;
    
    // last element, -1 is important (last element is sentinel)
    it = nums1.end() -1;
    std::cout << *it << std::endl;
    
}

// using sentinel value and dereferencing to change elements
void test2() {
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::iterator it {nums1.begin()}; // use list initialization!
    
    // using the end sentinel value with a while-loop
    // access elements one by one and increment
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        ++it;
    }
    
    display_vec(nums1);
}

// constiterator
void test3() {
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    // std::vector<int>::const_iterator it {nums1.begin()}; // gives a constant iterator
    auto it {nums1.cbegin()}; // shorter version
    
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    it = nums1.begin();
    while (it != nums1.end()) {
        //*it = 0; // throws error as this is a constant iterator
        ++it;
    }
    
    display_vec(nums1);
}

// using other STL containers
void test4() {
    std::vector<int> nums {1, 2, 3, 4, 5};
    auto it {nums.rbegin()}; // .crend, constant reverse iterator
    
    // need to use .rend() here!
    while (it != nums.rend()) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    // list iterator
    std::list<std::string> cats {"Oscar", "Jacques", "Simba", "Charles"};
    auto it2 {cats.rbegin()};
    std::cout << *it2 << std::endl;
    ++it2;
    std::cout << *it2 << std::endl;
    
    // map iterators [map is a dictionary]
    // curly braces for elements in C++ syntax
    // NOTE: This is sorted, BUT ALPHABETICALLY!
    std::map<std::string, int> cat_ages {
        {"Oscar", 9},
        {"Jacques", 4},
        {"Simba", 5}
    };
    
    auto it3 {cat_ages.begin()}; // regular iterator
    while (it3 != cat_ages.end()) {
        // elements are accessed using pointer arrow syntax
        std::cout << it3->first << ": " << it3->second << std::endl;
        ++it3;
    }
    
}

// iterating over a subset
void test5(){
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    // need to manually define start and end for this iteration pattern
    auto start {vec.begin()  + 2};
    auto finish {vec.end() - 3};
    
    while (start != finish){
        std::cout << *start << std::endl;
        ++start;
    }
}

int main(){
//    test1();
//    test2();
//    test3();
//    test4();
    test5();
    return 0;
    
}