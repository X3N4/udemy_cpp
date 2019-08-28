#pragma once

class Mystring
{
private:
    char *str; // pointer to char[] holding C-style string


public:
    // Constructors, Destructor
    Mystring(); // no args constructors
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source);
    ~Mystring(); // destructor
    
    // Overloaded operators (don't need namespace here)
    Mystring &operator=(const Mystring &rhs); // copy assignment operator
    Mystring &operator=(Mystring &&rhs); // move assignment, no const!
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;
    
    // Getters (all const)
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

