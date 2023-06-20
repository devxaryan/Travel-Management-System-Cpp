#include <iostream>
#include <string>
#include <limits>  // Add this line
#include "InputHelper.h"

namespace InputHelper {
    int getIntInput() {
        int input;
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return input;
    }

    std::string getStringInput() {
        std::string input;
        std::getline(std::cin, input);
        return input;
    }
}
