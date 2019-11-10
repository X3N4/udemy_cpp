#include <iostream>
#include <vector>
#include <list>
#include <stack>

template<typename T>
void display(std::stack<T> s){
    std::cout << "[ ";
    while (!s.empty()){
        T elem = s.top();
        s.pop(); // doesn't return the top element unlike Python
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main(){
    std::stack<int> s; // default: deque
    std::stack<int, std::vector<int>> s1;
    std::stack<int, std::list<int>> s2;
    std::stack<int, std::deque<int>> s3;
    
    for (int i: {1,2,3,4,5})
        s.push(i);
    display(s); // destroys elements in s
    
    s.push(100);
    display(s);
    
    s.pop();
    s.pop();
    display(s);
    
    // stack has no clear -> have to pop all elements
    while (!s.empty())
        s.pop();
    display(s);
    
    std::cout << "Size: " << s.size() << std::endl;
    
    s.push(10);
    display(s);
    
    // reference to top element -> Can be changed
    s.top() = 100;
    display(s);
    
    return 0;
    
}