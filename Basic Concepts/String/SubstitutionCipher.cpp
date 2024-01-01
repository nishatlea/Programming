
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string encryptCaesarCipher(const string& plaintext, int shift) {
   string ciphertext = "";

    for (char ch : plaintext) {
        if (isalpha(ch)) {
            char shifted = islower(ch) ? 'a' + (ch - 'a' + shift) % 26 : 'A' + (ch - 'A' + shift) % 26;
            ciphertext += shifted;
        } else {
            ciphertext += ch;
        }
    }

    return ciphertext;
}


int main() {
    string plaintext;
    int shift;
    cin>>plaintext>>shift;

    string encryptedText = encryptCaesarCipher(plaintext, shift);

   cout << encryptedText << endl;

    return 0;
}
