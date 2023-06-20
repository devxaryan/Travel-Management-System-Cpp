#include <iostream>
#include "Menu.h"
#include "InputHelper.h"
#include "TravelManager.h"
#include "Destination.h"

void Menu::showMainMenu() {
    TravelManager travelManager;

    while (true) {
        std::cout << "----- Main Menu -----" << std::endl;
        std::cout << "1. Add Destination" << std::endl;
        std::cout << "2. View Destinations" << std::endl;
        std::cout << "3. Search Destination" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice = InputHelper::getIntInput();

        switch (choice) {
            case 1: {
                std::cout << "Enter destination name: ";
                std::string name = InputHelper::getStringInput();

                std::cout << "Enter destination location: ";
                std::string location = InputHelper::getStringInput();

                std::cout << "Enter destination rating: ";
                int rating = InputHelper::getIntInput();

                Destination destination(name, location, rating);
                travelManager.addDestination(destination);
                break;
            }
            case 2:
                travelManager.viewDestinations();
                break;
            case 3: {
                std::cout << "Enter destination name to search: ";
                std::string name = InputHelper::getStringInput();
                travelManager.searchDestination(name);
                break;
            }
            case 4:
                std::cout << "Exiting program..." << std::endl;
                return;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl;
    }
}
