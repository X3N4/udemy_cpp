#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> // includes more different algorithms
#include <memory>

// generic display function
// since array length must be known, we can use a template
template <int n>
void display(const std::array<int, n> &arr){
    std::cout << "[ ";
    for (const auto &i: arr){
        std::cout << i << " ";
    }
    std::cout << " ]" << std::endl;
}

void test0() {
    std::cout << "Test 0" << std::endl;
    
    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr2; // full of garbage
    
    // put arr.size() as template argument
    display<arr1.size()>(arr1);
    display<arr2.size()>(arr2);
    
    arr2 = {10, 20, 30, 40, 50};
    
    display<arr1.size()>(arr1);
    display<arr2.size()>(arr2);
    
    std::cout << "Array 1 size: " << arr1.size() << ", Array 2 size: " << arr2.size() << std::endl;
    
    arr1.at(0) = 23;
    display<arr1.size()>(arr1);
    
    std::cout << "arr 1 front: " << arr1.front() << std::endl;
    std::cout << "arr 2 front: " << arr2.front() << std::endl;
    std::cout << std::endl;
}

void test1() {
    std::cout << "Test 1" << std::endl;
    
    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr2 {10, 20, 30, 40, 50};
    
    arr1.fill(0);
    
    display<arr1.size()>(arr1);
    display<arr2.size()>(arr2);
    
    arr1.swap(arr2);
    display<arr1.size()>(arr1);
    display<arr2.size()>(arr2);
    
    
    std::cout << std::endl;
}

void test2() {
    std::cout << "Test 2" << std::endl;
    
    std::array<int, 5> arr1 {1,2,3,4,5};
    
    // don't use raw pointers
    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 1000;
    display<arr1.size()>(arr1);
    
    std::cout << std::endl;
}

// sort example
void test3() {
    std::cout << "Test 3" << std::endl;
    
    std::array<int, 5> arr1 {2,1,3,5,4};
    
    std::sort(arr1.begin(), arr1.end());
    
    display<arr1.size()>(arr1);
    
    std::cout << std::endl;
}

void test4() {
    std::cout << "Test 4" << std::endl;
    
    std::array<int, 5> arr1 {2,1,3,5,4};
    
    std::array<int, 5>::iterator minimum = std::min_element(arr1.begin(), arr1.end());
    auto maximum = std::max_element(arr1.begin(), arr1.end());
    // need to dereference these as they are iterators
    std::cout << "Minimum: " << *minimum << " | Maximum: " << *maximum << std::endl;
    
    std::cout << std::endl;
    
}

void test5() {
    std::cout << "Test 5" << std::endl;
    
    std::array<int, 5> arr1 {2,3,3,5,4};
    
    auto adjacent = std::adjacent_find(std::begin(arr1), std::end(arr1));
    if (adjacent != std::end(arr1))
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl;
    else
        std::cout << "No adjacent elements found" << std::endl;
    
    std::cout << std::endl;
    
}

void test6() {
    std::cout << "Test 5" << std::endl;
    
    std::array<int, 5> arr1 {2,3,3,5,4};
    
    // accumulate is cumsum with starting value provided
    // is provided in numeric
    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    
    std::cout << "The Cumsum of the array is: " << sum << std::endl;
    std::cout << std::endl;
}

void test7() {
    std::cout << "Test 7" << std::endl;
    
    std::array<int, 12> arr1 {2,3,3,5,43,3,3,555,6,6,78,9};
    
    int counts = std::count(arr1.begin(), arr1.end(), 3);
    
    std::cout << "Number of 3s in the array: " << counts << std::endl;
    std::cout << std::endl;
}

void test8() {
    std::cout << "Test 7" << std::endl;
    
    std::array<int, 12> arr1 {2,3,3,5,43,3,3,555,6,6,78,9};
    
    int counts = std::count_if(arr1.begin(), arr1.end(), 
                                [] (int x) {return 10 <= x && x <= 100;}); // 10 <= x <= 100 doesn't work!
    
    std::cout << "Number of ints between 10 and 100 in the array: " << counts << std::endl;
    std::cout << std::endl;
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
    
    return 0;
    
}