#include <iostream>
#include <string>

std::string oddishOrEvenish(int num) {
    int sum = 0;

    std::string numberString = std::to_string(num);

    for (char digit : numberString) {
        sum += (digit - '0');
    }

    if (sum % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int number;
    std::cin >> number;

    std::string result = oddishOrEvenish(number);
    std::cout << result << std::endl;

    return 0;
}
