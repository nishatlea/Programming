
#include <iostream>
#include <string>
#include <algorithm>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    std::string s1 = str1;
    std::string s2 = str2;

    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    std::string word1, word2;
    std::cin>>word1>>word2;

    if (areAnagrams(word1, word2)) {
        std::cout << "The words are anagrams." << std::endl;
    } else {
        std::cout << "The words are not anagrams." << std::endl;
    }

    return 0;
}
