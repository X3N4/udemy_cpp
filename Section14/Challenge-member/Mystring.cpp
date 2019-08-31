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

bool Mystring::operator==(const Mystring &rhs){
    return (strcmp(this->str, rhs.str) == 0);
}
bool Mystring::operator!=(const Mystring &rhs){
    return !(*this == rhs);
}
bool Mystring::operator>(const Mystring &rhs){
    return (strcmp(this->str, rhs.str) > 0);
}
bool Mystring::operator<(const Mystring &rhs){
    return (strcmp(this->str, rhs.str) < 0);
}

Mystring Mystring::operator-(){
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i {0}; i < strlen(buff); ++i){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring Mystring::operator+(const Mystring &rhs){
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring Mystring::operator*(const unsigned &num){
    if (num == 0){
        Mystring temp {'\0'};
        return temp;
    }
    char *buff = new char[strlen(str)*num + 1];
    strcpy(buff, str);
    for (size_t i {0}; i < num - 1; ++i){
        strcat(buff, str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring &Mystring::operator+=(const Mystring &rhs){
    // We need to work with the Mystring objects here, not the C-style strings they hold!
    *this = *this + rhs;
    return *this;
}
Mystring &Mystring::operator*=(const unsigned &num){
    *this = *this*num;
    return *this;
}

// pre increment - no args given
// can be done simpler as we don't need to create a copy!
Mystring &Mystring::operator++(){
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i {0}; i < strlen(buff); ++i){
        buff[i] = std::toupper(buff[i]);
    }
    *this = Mystring {buff};
    return *this;
}

// post increment - int as placeholder to allow overloading
Mystring Mystring::operator++(int){
    Mystring temp {*this};
    operator++();
    return temp;
}