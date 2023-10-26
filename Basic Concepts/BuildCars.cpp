#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int cars(int wheels, int carBodies, int figures) {
    int wheelsNeeded = 4;  // Wheels needed for one car
    int bodiesNeeded = 1;  // Car bodies needed for one car
    int figuresNeeded = 2; // Figures needed for one car

    int completeCars = std::min({wheels / wheelsNeeded, carBodies / bodiesNeeded, figures / figuresNeeded});

    return completeCars;
}

int main() {
    int wheels, carBodies, figures;
    std::cin>>wheels>>carBodies>>figures;
    int result = cars(wheels, carBodies, figures);
    std::cout << result << std::endl; // Output should be 0

    return 0;
}

