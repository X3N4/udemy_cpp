#include <vector>
#include <string>
#include <iostream>
#include "Movies.h"

using std::cout;
using std::endl;


Movies::Movies(std::vector<Movie> v)
    : movies {v} {}

// Copy constructor
Movies::Movies (const Movies &source)
    : Movies {source.movies}{}

void Movies::add_movie(std::string name, std::string rating, int watched){
    for (const auto &mov: movies){
        if (*(mov.name) == name){
            cout << "This movie is already in the database." << endl;
            return;
        }
    }
    Movie *mov = new Movie {name, rating, watched};
    movies.push_back(*mov);
    cout << name << " added to database." << endl;
    delete mov;
}

void Movies::increment_watched (std::string name){
    for (size_t i {}; i < movies.size(); i++){
        if (*(movies.at(i).name) == name){
            ++(*(movies.at(i).watched));
            cout << "OK" << endl;
            return;
        }
    }
    cout << name << " not found." << endl;
}

void Movies::display() const {
    for (const auto &mov: movies)
        mov.display();
}

