
#include <iostream>
#include <string>
#include <unordered_set>

std::string removeDuplicates(const std::string& str) {
    std::string result;
    std::unordered_set<char> seen;

    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }

    return result;
}

int main() {
    std::string input ;
    std::cin>>input;
    std::string result = removeDuplicates(input);
    std::cout << result << std::endl;
    return 0;
}
