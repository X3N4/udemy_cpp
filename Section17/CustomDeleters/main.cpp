#include <iostream>
#include <memory>


class Test {
private:
    static constexpr int def_data {0};
    int data;
public:
    Test(int data=def_data): data{data} {std::cout << "\tTest constructor." << std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "\tTest destructor killing data " << data << "." << std::endl;}
};

// Why wrap a raw pointer inside a shared_ptr?
// Allows to use C structures with the functionality of C++
void test_deleter(Test *ptr) {
    std::cout << "\tUsing the custom deleter." << std::endl;
    delete ptr;
}

int main(){
    
    {
        // Using lambda
        std::shared_ptr<Test> ptr1 {new Test{100}, test_deleter};
    }
    
    {
        // Using lambda
        std::shared_ptr<Test> ptr1 {new Test{100000}, 
            [] (Test *ptr){
                std::cout << "\tDeleting with a lambda." << std::endl;
                delete ptr;
            }
        };
    }
    
    return 0;
    
}