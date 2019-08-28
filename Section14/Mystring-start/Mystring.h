#pragma once

class Mystring
{
private:
    char *str; // pointer to char[] holding C-style string


public:
    Mystring(); // no args constructors
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    ~Mystring(); // destructor
    
    void display() const; // getters -> all const
    int get_length() const;
    const char *get_str() const;

};

