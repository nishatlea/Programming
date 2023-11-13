
#include <iostream>
#include <cmath>

int kineticEnergy(double mass, double velocity) {
    // Calculate kinetic energy using the formula and round to the nearest integer
    int ke = static_cast<int>(std::round(0.5 * mass * velocity * velocity));
    return ke;
}

int main() {

    double m,v;

    std::cin>>m>>v;

    std::cout << kineticEnergy(m, v) << std::endl;

    return 0;
}
