#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <numeric>
#include <memory>

template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[ ";
    for (const auto &i: d)
        std::cout << i << " ";
    std::cout << " ]" << std::endl;
}


void test0() {
    std::cout << "Test 0" << std::endl;
    std::deque<int> d {1,2,3,4,5};
    
    d = {10, 20, 30, 40, 50};
    display(d);
    
    std::deque<int> d1 (10, 100); // ten 100s
    display(d1);
    
    d1.at(1) = 23;
    display(d1);
    
    
    std::cout << std::endl << std::endl;
}

void test1() {
    std::cout << "Test 1" << std::endl;
    std::deque<int> d (3,0);
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    
    d.push_front(100);
    d.push_front(200);
    
    display(d);
    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;
    
    d.pop_back();
    d.pop_front();
    display(d);
    std::cout << "Size: " << d.size() << std::endl;    
    
    std::cout << std::endl << std::endl;
}

void test2() {
    std::cout << "Test 2" << std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> deck;
    
    for (const auto &num: vec){
        if (num % 2 == 1)
            deck.push_front(num);
        else
            deck.push_back(num);
    }
    
    display(deck);
    
    std::cout << std::endl << std::endl;
}

void test3() {
    std::cout << "Test 3" << std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> deck;
    
    // results in reverse order
    for (const auto &num: vec)
        deck.push_front(num);
    display(deck);
    
    deck.clear(); // empty deque
    
    
    // preserves order
    for (const auto &num: vec)
        deck.push_back(num);
    display(deck);
    
    std::cout << std::endl << std::endl;
}

void test4() {
    std::cout << "Test 4" << std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> deck;
    
    // inserts at front
    std::copy(vec.begin(), vec.end(), std::front_inserter(deck));
    display(deck);
    
    deck.clear();
    
    // inserts at back
    std::copy(vec.begin(), vec.end(), std::back_inserter(deck));
    display(deck);
    std::cout << std::endl << std::endl;
}

int main(){
    test0();
    test1();
    test2();
    test3();
    test4();
    
    return 0;
    
}