
#include <iostream>
#include <cmath>

bool rectangleInCircle(double width, double height, double radius) {
    // Calculate the diagonal of the rectangle
    double diagonal = sqrt(width * width + height * height);

    // Check if the diagonal is less than or equal to the diameter of the circle (2 * radius)
    if (diagonal <= 2 * radius) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Example usages:
    double width, height, radius;
    std::cin>>width>>height>>radius;
    std::cout << std::boolalpha; // Print "true" or "false" instead of "1" or "0"
    std::cout << rectangleInCircle(width, height, radius) << std::endl; // true
    return 0;
}
