
#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void generatePermutations(std::string& str, int left, int right, std::vector<std::string>& result) {
    if (left == right) {
        result.push_back(str);
    } else {
        for (int i = left; i <= right; i++) {
            std::swap(str[left], str[i]);
            generatePermutations(str, left + 1, right, result);
            std::swap(str[left], str[i]); // Backtrack
        }
    }
}

std::vector<std::string> getAllPermutations(const std::string& str) {
    std::vector<std::string> result;
    std::string mutableStr = str; // Create a mutable copy to swap characters
    generatePermutations(mutableStr, 0, str.length() - 1, result);
    return result;
}

int main() {
    // Test cases
    std::string str = "abc";
    std::vector<std::string> permutations = getAllPermutations(str);
    std::cout << "Test 1: Permutations of \"" << str << "\":" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << " ";
    }
    std::cout << "\n\n";

    str = "abcd";
    permutations = getAllPermutations(str);
    std::cout << "Test 2: Permutations of \"" << str << "\":" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << " ";
    }
    std::cout << "\n\n";

    str = "123";
    permutations = getAllPermutations(str);
    std::cout << "Test 3: Permutations of \"" << str << "\":" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << " ";
    }
    std::cout << "\n\n";

    str = "xyz";
    permutations = getAllPermutations(str);
    std::cout << "Test 4: Permutations of \"" << str << "\":" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << " ";
    }
    std::cout << "\n\n";

    str = "ab";
    permutations = getAllPermutations(str);
    std::cout << "Test 5: Permutations of \"" << str << "\":" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << " ";
    }
    std::cout << "\n\n";

    return 0;
}
