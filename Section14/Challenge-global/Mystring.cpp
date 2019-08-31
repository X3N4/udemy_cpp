#include <iostream>
#include <cstring>
#include "Mystring.h"

using std::strcpy;
using std::strcmp;
using std::strcat;
using std::strlen;

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (strcmp(lhs.str, rhs.str) == 0);
}
bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return !(lhs == rhs);
}
bool operator>(const Mystring &lhs, const Mystring &rhs){
    return (strcmp(lhs.str, rhs.str) > 0);
}
bool operator<(const Mystring &lhs, const Mystring &rhs){
    return (strcmp(lhs.str, rhs.str) < 0);
}
Mystring operator-(const Mystring &obj){
    char *buff = new char [strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i {0}; i < strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char [strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring operator*(const Mystring &obj, const unsigned &num){
    if (num == 0){
        Mystring temp {'\0'};
        return temp;
    }
    char *buff = new char[strlen(obj.str)*num + 1];
    strcpy(buff, obj.str);
    for (size_t i {1}; i < num; i++){
        strcat(buff, obj.str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    lhs = lhs + rhs;
    return lhs;
}
Mystring &operator*=(Mystring &lhs, const unsigned &num){
    lhs = lhs*num;
    return lhs;
}
Mystring &operator++(Mystring &obj){
    // no need to create new object here!
    for (size_t i {0}; i < strlen(obj.str); i++){
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}
Mystring operator++(Mystring &obj, int){
    Mystring temp {obj.str};
    ++obj; // needs to be pre increment
    return temp; // return copy of old object
}