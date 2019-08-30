#pragma once

class Mystring{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs); // automatically dereference objects
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // all const, we don't change original objects
    friend std::ostream &operator<<(std::ostream &out, const Mystring &obj); // pass by refs to save memory
    friend std::istream &operator>>(std::istream &in, Mystring &obj); // no const, we wanna change the obj
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

