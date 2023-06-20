#ifndef TRAVELMANAGER_H
#define TRAVELMANAGER_H

#include <vector>
#include "Destination.h"

class TravelManager {
private:
    std::vector<Destination> destinations;

public:
    void addDestination(const Destination& destination);
    void viewDestinations() const;
    void searchDestination(const std::string& name) const;
};

#endif // TRAVELMANAGER_H
