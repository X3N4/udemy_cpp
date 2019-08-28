#pragma once
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
    std::vector<Movie> movies;
public:
    void add_movie(std::string name, std::string rating="R", int watched=0);
    void increment_watched (const std::string name);
    void display() const;
    
    // Passing in empty vector as default argument
    Movies(std::vector<Movie> v=std::vector<Movie>());
    Movies(const Movies &source);
};

