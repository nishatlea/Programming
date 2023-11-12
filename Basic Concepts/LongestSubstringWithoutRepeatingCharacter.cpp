#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(const std::string& s) {
    int n = s.length();
    std::unordered_map<char, int> charIndex;
    int maxLength = 0, start = -1;

    for (int i = 0; i < n; i++) {
        if (charIndex.find(s[i]) != charIndex.end() && charIndex[s[i]] > start) {
            start = charIndex[s[i]];
        }
        charIndex[s[i]] = i;
        maxLength = std::max(maxLength, i - start);
    }

    return maxLength;
}

int main() {
    std::string str;
    std::cin>>str;
    int length = lengthOfLongestSubstring(str);
    std::cout << length << std::endl;


    return 0;
}

