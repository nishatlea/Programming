

#include <iostream>
#include <string>

std::string encryptCaesarCipher(const std::string& plaintext, int shift) {
    std::string ciphertext = "";

    for (char ch : plaintext) {
        if (std::isalpha(ch)) {
            char shifted = std::islower(ch) ? 'a' + (ch - 'a' + shift) % 26 : 'A' + (ch - 'A' + shift) % 26;
            ciphertext += shifted;
        } else {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

std::string decryptCaesarCipher(const std::string& ciphertext, int shift) {
    return encryptCaesarCipher(ciphertext, 26 - (shift % 26)); // Decryption is the same as encryption with the inverse shift
}

int main() {
    std::string plaintext = "Hello, world!";
    int shift = 3;

    std::string encryptedText = encryptCaesarCipher(plaintext, shift);
    std::string decryptedText = decryptCaesarCipher(encryptedText, shift);

    std::cout << "Original Text: " << plaintext << std::endl;
    std::cout << "Encrypted Text: " << encryptedText << std::endl;
    std::cout << "Decrypted Text: " << decryptedText << std::endl;

    return 0;
}
