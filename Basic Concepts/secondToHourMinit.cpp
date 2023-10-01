#include <iostream>

int main() {
    int seconds;

    // Input the number of seconds
    std::cin >> seconds;

    // Calculate hours and minutes
    int hours = seconds / 3600;  // 1 hour = 3600 seconds
    seconds %= 3600;
    int minutes = seconds / 60;  // 1 minute = 60 seconds
    seconds %= 60;

    // Display the result
    std::cout << hours<<":"<< minutes << std::endl;
    return 0;
}

