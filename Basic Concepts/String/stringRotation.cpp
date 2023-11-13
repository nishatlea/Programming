#include <iostream>
#include <string>

bool isRotation(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    std::string str1str1 = str1 + str1;  // Concatenate str1 with itself

    return str1str1.find(str2) != std::string::npos;
}

int main() {

    std::string str1;
    std::string str2;
    std::cin>> str1 >> str2 ;
    std::cout << (isRotation(str1, str2) ? "True" : "False") << std::endl;
    return 0;
}
