
#include <iostream>

int ageDifference(int fAge, int sAge) {
    int ageDiff = fAge - 2 * sAge;

    if (ageDiff < 0) {
        // Father is currently younger than twice the age of the son.
        ageDiff = -ageDiff;  // Take the absolute value.
    }

    return ageDiff;
}

int main() {
    int fAge, sAge;
    std::cin>>fAge>>sAge;
    std::cout << ageDifference(fAge, sAge) << std::endl;

    return 0;
}
