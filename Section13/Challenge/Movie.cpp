#include "Movie.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

Movie::Movie(std::string name, std::string rating, int watched){
    this->name = new std::string;
    // Dereference pointer using this
    *(this->name) = name;
    this->rating = new std::string;
    *(this->rating) = rating;
    this->watched = new int;
    *(this->watched) = watched;
}

// Deep copy constructor
Movie::Movie(const Movie &source)
    : Movie {*source.name, *source.rating, *source.watched}{}

// Move constructor
Movie::Movie(Movie &&source) noexcept
    :name {source.name}, rating {source.rating}, watched {source.watched}{
        source.name = nullptr;
        source.rating = nullptr;
        source.watched = nullptr;
}

void Movie::display() const{
    cout << "Name: " << *name << ", " << "Rating: " << *rating 
    << ", " << "Times watched: " << *watched << endl;
}

// Destructor for class using pointers
Movie::~Movie(){
    delete name;
    delete rating;
    delete watched;
}
