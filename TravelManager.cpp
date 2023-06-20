#include <iostream>
#include "TravelManager.h"

void TravelManager::addDestination(const Destination& destination) {
    destinations.push_back(destination);
    std::cout << "Destination added successfully!" << std::endl;
}

void TravelManager::viewDestinations() const {
    if (destinations.empty()) {
        std::cout << "No destinations to display." << std::endl;
    } else {
        for (const auto& destination : destinations) {
            destination.display();
            std::cout << std::endl;
        }
    }
}

void TravelManager::searchDestination(const std::string& name) const {
    bool found = false;
    for (const auto& destination : destinations) {
        if (destination.getName() == name) {
            destination.display();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Destination not found." << std::endl;
    }
}
