#include <iostream>
#include <string>

std::string removeTrailingZeros(const std::string& n) {
    int len = n.length();
    int decimalPos = n.find('.');

    if (decimalPos != std::string::npos) {
        int nonZeroIdx = len - 1;

        while (nonZeroIdx > decimalPos && n[nonZeroIdx] == '0') {
            nonZeroIdx--;
        }

        if (nonZeroIdx > decimalPos) {
            return n.substr(0, nonZeroIdx + 1);
        }
        else if (nonZeroIdx == decimalPos){
            return n.substr(0,nonZeroIdx);
        }
    }

    return n;
}

int main() {
    std::string number;
    std::cin >> number;

    std::string result = removeTrailingZeros(number);
    std::cout << result << std::endl;

    return 0;
}
