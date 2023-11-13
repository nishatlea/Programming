#include <iostream>

bool checkForTen(int a, int b) {
    return (a == 10 || b == 10 || a + b == 10);
}

int main() {
    int num1, num2;

    std::cin >> num1;
    std::cin >> num2;

    if (checkForTen(num1, num2)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
