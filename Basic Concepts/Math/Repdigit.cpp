#include <iostream>
#include <unordered_set>
#include <cmath>

bool isRepdigit(int num) {
    if(num==0)
        return true;

    std::unordered_set<int> digits;

    while (num > 0) {
        int digit = num % 10;
        if (digits.find(digit) != digits.end()) {
            return true;
        }
        digits.insert(digit);
        num /= 10;
    }

    return false;
}

int main() {
    std::cout << std::boolalpha;
    int number;
    std::cin>>number;
    std::cout << isRepdigit(number) << std::endl;

    return 0;
}
