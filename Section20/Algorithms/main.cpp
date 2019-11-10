#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <cctype>

class Person {
    std::string name;
    int age;
    
public:
    Person () = default;
    Person (std::string name, int age)
        : name {name}, age {age} {}
        
    // without these overloaded STL algorithms cannot compare elements
    bool operator< (const Person &other) const {return age < other.age;}
    bool operator== (const Person & other) const {return age == other.age;}
    
};

void find_test(){
    std::vector<int> vec {1,2,3,4,5};
    
    // find first occurence, returns iterator!!
    auto loc = std::find(std::begin(vec), std::end(vec), 1);
    
    // auto loc = std::find(vec.begin(), vec.end(), 1);
    
    // if target is found, find returns iterator pointing to target
    // else points to end
    if (loc != std::end(vec))
        std::cout << "Found the target: " << *loc << std::endl;
    else
        std::cout << "Couldn't find the target" << std::endl;
        
    std::list<Person> guys {
        {"Steph", 32},
        {"Lebron", 35},
        {"Michael", 55}
    };
    
    auto loc1 = std::find(guys.begin(), guys.end(), Person {"Lebron", 35});
    if (loc1 != guys.end())
        std::cout << "Found Lebron." << std::endl;
    else
        std::cout << "Couldn't find the target" << std::endl;
    
}

void count_test() {
    
    std::vector<int> nums {1, 1, 2, 3, 4, 5, 61, 12, 4, 1};
    
    // syntax is always the same: algorithm(container.begin, container.end, target)
    // can start and end at location by increasing/decreasing end
    auto counts = std::count(nums.begin() + 3, nums.end() - 1, 1);
    
    std::cout << "Found " << counts << " occurences." << std::endl;
    
}

void count_if_test() {
    
    std::vector<int> vec {1, 2,3,4,5,6,7,8,9, 100, 23};
    
    // write generic code like this
    // lambda syntax [] (input_args) {function body;}
    auto result {std::count_if(vec.begin(), vec.end(), [] (int x) {return x % 2 == 0;})};
    std::cout << result << " even numbers found." << std::endl;
    
    result = {std::count_if(vec.begin(), vec.end(), [] (int x) {return x % 2 != 0;})};
    std::cout << result << " odd numbers found." << std::endl;
    
    result = {std::count_if(vec.begin(), vec.end(), [] (int x) {return x <= 5;})};
    std::cout << result << " numbers smaller or equal to 5." << std::endl;
}

void replace_test() {
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    
    for (const auto &i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    std::replace(vec.begin(), vec.end(), 10, 100);
    
    for (const auto &i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void all_of_test() {
    std::vector <int> vec {1,2,3,4,5,6,7,8,9,23};
    
    if (std::all_of(vec.begin(), vec.end(), [] (int x){return x >= 0;}))
        std::cout << "All numbers are non-negative." << std::endl;
    else
        std::cout << "This vector contains a negative number" << std::endl;
        
    if (std::all_of(vec.begin(), vec.end() - 1, [] (int x){return x < 10;}))
        std::cout << "All numbers are smaller than 10." << std::endl;
    else
        std::cout << "This vector contains a large number." << std::endl;
    
}

void string_transform_test() {
    
    std::string str1 {"My cat's name is Oscar."};
    std::cout << "Before transform: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout << "After transform: " << str1 << std::endl;
    
}

int main(){
    find_test();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();
    
    return 0;
    
}