#include <iostream>
#include <string>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;
string removeSpecialCharacters(const string& str) {
    string result = "";

    for (char ch : str) {
        // Check if the character is alphanumeric
        if (isalnum(ch)) {
            result += ch;
        }
    }

    return result;
}

int main() {
    string inputString;
    cin>>inputString;
    string result = removeSpecialCharacters(inputString);

    cout << result << std::endl;

    return 0;
}
