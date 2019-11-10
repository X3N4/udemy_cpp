#include <iostream>
#include <map>
#include <set>
#include <iomanip>


// generic display function
template<typename T1, typename T2>
void display(const std::map<T1, T2> &m){
    std::cout << "[ ";
    for (auto &ele: m)
        std::cout << "{" << ele.first << ": " << ele.second << "} ";
    std::cout << "]" <<  std::endl;
}

// overloaded display for displaying the sets
void display(const std::map<std::string, std::set<int>> &m){
    std::cout << "[ ";
    for (auto &p: m){
        std::cout << "{" << p.first << ": ";
        std::cout << "[ ";
        for (auto &val: p.second)
            std::cout << val << " ";
        
        std::cout << "] ";
        std::cout << "} ";
    }
    std::cout << "]" <<  std::endl;
}

void test0() {
    std::cout << "Test 0" << std::endl;
    std::map<std::string, int> m {
        {"Oscar", 4},
        {"Leo", 11},
        {"Jacques", 8}
    };
    display(m);
    
    m.insert(std::pair<std::string, int> {"Simba", 5});
    display(m);
    
    m.insert(std::make_pair("Simba", 5));
    display(m);
    
    // can add new elements like this easily
    // doesn't work with .at()?
    m["Charles"] = 7;
    display(m);
    
    // can't use this to add new element
    // but therefore it throws error if key is not in
    m.at("Jacques") += 1;
    display(m);
    
    m.erase("Charles");
    display(m);
    
    // using .count() to determine membership
    std::cout << "Simba is in the map: " << m.count("Simba") << "." << std::endl;
    std::cout << "Charles is in the map: " << m.count("Charles") << "." << std::endl;
    
    auto it {m.find("Oscar")};
    if (it != std::end(m))
        // arrow notation works here because we are accessing members of element iterator is pointing to
        std::cout << it->first << ", " << it->second << " is in the map." << std::endl;
        
    m.clear();
    display(m);
    
    
    std::cout << std::endl;
}

void test1() {
    std::cout << "Test 1" << std::endl;
    // note: these are sets! no duplicate values possible
    std::map<std::string, std::set<int>> grades {
        {"Jack", {100, 95, 90}},
        {"Joe", {100, 95, 92}},
        {"Gill", {92, 91, 90}}
    };
    
    display(grades);
    
    // .at() for access, [] for creating new entry
    grades.at("Gill").insert(87); // insert 87 into Gill's set of grades
    
    display(grades);
    
    auto it {grades.find("Joe")};
    
    if (it != std::end(grades)){
        it->second.insert(99); // insert 99 into Joe's set of grades
    }
    
    display(grades);
    
    
    
    std::cout << std::endl;
}

int main(){
    test0();
    test1();
    
    return 0;
    
}