#include <iostream>
#include <string>


// passing N as non-typed template paramter instead of constructor parameter
// adding typename T makes the class generic, not just for ints
template <typename T, int N>
class Array {
    int size {N};
    T values[N]; // array being wrapped
    
    // needs template parameters
    friend std::ostream &operator<< (std::ostream &stream , const Array<T, N> &arr) {
        stream << "[ ";
        for (const auto &val: arr.values){
            stream << val << " ";
        }
        stream << "]" << std::endl;
        return stream;
    }
    
    
public:
    Array() = default;
    
    // constructor with parameter
    Array(T init_val) {
        for (auto &item: values)
            item = init_val;
    }
    
    // fill array method
    void fill (T val){
        for (auto &item: values)
            item = val;
    }
    
    int get_size() const {return size;}
    
    // overloaded bracket indexing
    T &operator[](int index) {return values[index];}
    
};

int main(){
    
    // have to always supply both template parameters
    Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl << std::endl;
    
    nums.fill(0);
    std::cout << nums << std::endl << std::endl;
    
    nums.fill(1000);
    std::cout << nums << std::endl << std::endl;
    
    nums[3] = 1337;
    nums[1] = 34;
    std::cout << nums << std::endl << std::endl;
    
    Array<int, 100> nums2{1};
    std::cout << nums2 << std::endl << std::endl;
    
    Array<std::string, 10> words{"Oscar"};
    std::cout << words << std::endl << std::endl;
    
    words[0] = "Jacques";
    std::cout << words << std::endl << std::endl;
    
    
    return 0;
    
}