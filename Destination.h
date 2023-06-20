#ifndef DESTINATION_H
#define DESTINATION_H

#include <string>

class Destination {
private:
    std::string name;
    std::string location;
    int rating;

public:
    Destination();
    Destination(const std::string& name, const std::string& location, int rating);

    void setName(const std::string& name);
    void setLocation(const std::string& location);
    void setRating(int rating);

    std::string getName() const;
    std::string getLocation() const;
    int getRating() const;

    void display() const;
};

#endif // DESTINATION_H
