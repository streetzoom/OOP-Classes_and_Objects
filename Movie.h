//
// Created by STZ on 6/12/22.
//
#ifndef CHALLENGE_MOVIE_H
#define CHALLENGE_MOVIE_H
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    // Constructor
    Movie(std::string n, std::string r, int w);

    // Copy constructor
    Movie(const Movie &src);

    // Destructor
    ~Movie();

    // bunch of getters and setters
    std::string get_name() const {return name;}
    void set_name(std::string n) {name = std::move(n);}

    std::string get_rating() const {return rating;}
    void set_rating(std::string r) {rating = std::move(r);}

    int get_watched() const {return watched;}
    void set_watched(int w) {watched = w;}

    // func to increment watched movie
    void increment_watched() {++watched;}

    // func prototype
    void display() const;
};

#endif //CHALLENGE_MOVIE_H
