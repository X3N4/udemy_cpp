#pragma once

class Mystring
{
private:
    char *str; // pointer to char[] holding C-style string


public:
    Mystring(); // no args constructors
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source);
    ~Mystring(); // destructor
    
    Mystring &operator=(const Mystring &rhs); // copy assignment operator
    Mystring &operator=(Mystring &&rhs); // move assignment, no const!
    
    void display() const; // getters -> all const
    int get_length() const;
    const char *get_str() const;

};

