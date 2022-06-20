//
// Created by STZ on 6/12/22.
//
#include <iostream>
#include "Movies.h"
#include "Movie.h"

// Constructor
Movies::Movies() {
    movies = new std::vector<Movie>;
}

// Deep copy Constructor
Movies::Movies(const Movies &source) {
    movies = new std::vector<Movie> {*source.movies};
}

// Move Constructor
Movies::Movies(Movies &&source) noexcept
    : movies {source.movies} {
        source.movies = nullptr;
}

// Destructor
Movies::~Movies() {
    delete movies;
}

bool Movies::add_movie(const std::string &name, const std::string &rating, int watched) {
    // you implement this method
    for (const Movie &movie: *movies) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    Movie temp{name, rating, watched};
    movies->push_back(temp);
    return true;
}

bool Movies::increment_watched(const std::string &name) {
    for (Movie &movie: *movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    // You implement this method
    if (movies->empty()) {
        std::cout << "Unable to display movies - no movie" << std::endl;
    } else {
        std::cout << "-------------------------" << std::endl;
        for (const Movie &movie: *movies) {
            movie.display();
        }
        std::cout << "-------------------------" << std::endl;
    }
}