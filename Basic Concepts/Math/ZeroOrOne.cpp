
#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> numberMap = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    std::string input;
    std::cin >> input;

    for (char &c : input) {
        c = std::tolower(c);
    }

    if (numberMap.find(input) != numberMap.end()) {
        int number = numberMap[input];


        if (number % 2 == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << 1 << std::endl;
        }
    }

    return 0;
}
