#pragma once
#include <string>

class Movie
{   
    friend class Movies;
    std::string *name {nullptr};
    std::string *rating {nullptr};
    int *watched {nullptr};
public:
    void display() const;
    
    Movie(std::string name, std::string rating="None", int watched=0);
    Movie(const Movie &source);
    Movie (Movie &&source) noexcept;
    ~Movie();

};

