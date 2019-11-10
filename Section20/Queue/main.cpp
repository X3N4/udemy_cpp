#include <iostream>
#include <list>
#include <deque>
#include <queue>

// pass by value to not destroy the cue, copy is destroyed instead
template<typename T>
void display(std::queue<T> q){
    std::cout << "[ ";
    while (!q.empty()){
        T el {q.front()}; // have to display front as first element is popped
        q.pop(); // pop removes first element
        std::cout << el << " ";
    }
    std::cout << "]" << std::endl;
}

int main(){
    std::queue<int> q;
    
    for (int i: {1,2,3,4,5})
        q.push(i);
    display(q);
    
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    q.push(100);
    display(q);
    
    q.pop();
    q.pop();
    display(q);
    
    while (!q.empty())
        q.pop();
    display(q);
    
    std::cout << "Size: " << q.size() << std::endl;
    
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);
    
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    q.front() = 23;
    q.back() = 2300;
    
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    return 0;
    
}