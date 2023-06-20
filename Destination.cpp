#include <iostream>
#include "Destination.h"

Destination::Destination() : name(""), location(""), rating(0) {}

Destination::Destination(const std::string& name, const std::string& location, int rating)
    : name(name), location(location), rating(rating) {}

void Destination::setName(const std::string& name) {
    this->name = name;
}

void Destination::setLocation(const std::string& location) {
    this->location = location;
}

void Destination::setRating(int rating) {
    this->rating = rating;
}

std::string Destination::getName() const {
    return name;
}

std::string Destination::getLocation() const {
    return location;
}

int Destination::getRating() const {
    return rating;
}

void Destination::display() const {
    std::cout << "Destination: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}
