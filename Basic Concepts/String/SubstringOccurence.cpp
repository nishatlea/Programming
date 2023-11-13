
#include <iostream>
#include <string>

int countSubstringOccurrences(const std::string& str, const std::string& substr) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substr, pos)) != std::string::npos) {
        count++;
        pos += substr.length();
    }

    return count;
}

int main() {
    std::string str;
    std::string substr;
    std::cin>>str>>substr;
    int count = countSubstringOccurrences(str, substr);
    std::cout << count  << std::endl;

    return 0;
}
