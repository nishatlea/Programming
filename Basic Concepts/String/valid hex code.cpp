#include <iostream>
#include <string>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;

bool isValidHexCode(const string& code) {
    if (code.length() != 7 || code[0] != '#')
        return false;

    for (size_t i = 1; i < code.length(); ++i) {
        char c = toupper(code[i]);
        if (!isalnum(c) || (c < '0' || (c > '9' && c < 'A') || c > 'F'))
            return false;
    }

    return true;
}

int main() {
    cout << boolalpha;
    string input;
    cin>>input;
    cout<<isValidHexCode(input)<<endl;

    return 0;
}
