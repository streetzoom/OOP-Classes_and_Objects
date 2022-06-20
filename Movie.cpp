//
// Created by STZ on 6/12/22.
//
#include "Movie.h"
#include <iostream>

// Constructor
Movie::Movie(std::string n, std::string r, int w)
    : name {std::move(n)}, rating {std::move(r)}, watched {w} {
}

// Copy constructor
Movie::Movie(const Movie &src)
    : Movie{src.name, src.rating, src.watched} {
}

// Destructor
Movie::~Movie() = default;

// func to display movie obj
void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}