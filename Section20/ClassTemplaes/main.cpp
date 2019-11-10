#include <iostream>
#include <vector>
#include <string>


// Template classes have to implement in the .h file only [NO .cpp file!]
template <typename T>
class Item {
private:
    std::string name;
    T value;
    
public:
    Item(std::string name, T value): name {name}, value {value} {};
    std::string get_name() const {return name;}
    T get_value() const {return value;}
    
};


template <typename T1, typename T2>
struct MyPair{
    T1 first;
    T2 second;
};



int main(){
    
    // type NEEDS to be specified here!!!
    Item<int> item1 {"Oscar", 12};
    std::cout << item1.get_name() << " " << item1.get_value() << std::endl;
    
    Item<std::string> item2 {"Oscar", "Cat"};
    std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
    
    // nested item
    Item<Item<std::string>> item3 {"Oscar", {"Cat", "tigered"}};
    std::cout << item3.get_name() << " " << item3.get_value().get_name()
                                  << " " << item3.get_value().get_value() << std::endl;
                                  
    
    std::cout << std::endl << std::endl;
    std::vector<Item<double>> vec {};
    vec.push_back(Item<double> {"Oscar", 3.7});
    vec.push_back(Item<double> {"Jacques", 6.9});
    vec.push_back(Item<double> {"Leo", 9.1});
    
    for (const auto &item: vec){
        std::cout << item.get_name() << " " << item.get_value() << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    
    MyPair<int, double> p1 {100, 200};
    MyPair<std::string, int> p2 {"Johnny", 67};
    
    std::cout << p1.first << " " << p1.second << std::endl;
    std::cout << p2.first << " " << p2.second << std::endl;
    
    return 0;
    
}