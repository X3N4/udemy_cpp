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

// Destructor
Mystring::~Mystring()
{
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

void Mystring::display() const {
    cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const {return strlen(str);}

const char *Mystring::get_str() const {return str;}
