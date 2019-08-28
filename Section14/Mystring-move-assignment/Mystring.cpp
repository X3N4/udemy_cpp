#include <iostream>
#include <cstring>
#include "Mystring.h"
using std::strcpy;
using std::cout;
using std::strlen;

// No args constructor
Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

// overloaded constructor for passed arguments
Mystring::Mystring(const char *s)
    :str{nullptr}{
    if (s==nullptr){
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s) + 1]; // extra 1 for termination
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring & source)
    :str{nullptr}{
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

// Move constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
        source.str = nullptr;
        cout << "Move constructor used" << std::endl;
    }

// Destructor
Mystring::~Mystring()
{
    // conditional has to be in parentheses here!
    cout << "Calling destructor for " << ((str==nullptr) ? "nullptr" : str)  << std::endl;
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator =(const Mystring &rhs){
    cout << "Copy assignment used" << std::endl;
    if (this == &rhs)
        return *this; // doesn't return pointer
    
    delete [] this->str; // delete str of current object
    str = new char[strlen(rhs.str) + 1]; // don't use a reference here
    strcpy(str, rhs.str); // automatically refers to this->str
    return *this; // enable chained assignments
}


// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    cout << "Move assignment used" << std::endl;
    // self assignment check is always the same (move and copy)
    if (this == &rhs)
        return *this;
    
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display() const {
    cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const {return strlen(str);}

const char *Mystring::get_str() const {return str;}


