#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"
#include "Movies.h"

using namespace std;

int main() {
    Movies my_movies;
    my_movies.display();
    my_movies.add_movie("Big", "PG-13",2);
    my_movies.add_movie("Star Wars", "PG",5);
    my_movies.add_movie("Cinderella", "PG",7);
    my_movies.display();
    my_movies.add_movie("Cinderella", "PG",7);
    my_movies.add_movie("Ice Age", "PG",12);
    my_movies.display();
    my_movies.increment_watched("Big");
    my_movies.increment_watched("Ice Age");
    my_movies.display();
    my_movies.increment_watched("XXX");
	return 0;
}