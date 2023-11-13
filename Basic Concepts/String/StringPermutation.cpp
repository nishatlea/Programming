#include <iostream>
#include <string>
#include <algorithm>

void generatePermutations(std::string str, int left, int right) {
    if (left == right) {
        std::cout << str << " ";
    } else {
        for (int i = left; i <= right; i++) {
            if (i != left && str[i] == str[left]) {
                continue; // Skip duplicate characters to avoid duplicate permutations
            }
            std::swap(str[left], str[i]);
            generatePermutations(str, left + 1, right);
        }
    }
}

void generateAllPermutations(std::string str) {
    int n = str.length();
    std::sort(str.begin(), str.end()); // Sort the input string to ensure output is in sorted order
    generatePermutations(str, 0, n - 1);
}

int main() {
    std::string input;
    std::cin >> input;

    generateAllPermutations(input);
    std::cout<<std::endl;

    return 0;
}
