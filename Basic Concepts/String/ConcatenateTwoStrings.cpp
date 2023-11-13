
#include <iostream>
#include <string>

std::string concatName(const std::string& firstName, const std::string& lastName) {
    return lastName + ", " + firstName;
}

int main() {
    std::string firstName, lastName;

    // Input the first name and last name
    std::cin >> firstName;
    std::cin >> lastName;

    // Call the function to concatenate and display the result
    std::string fullName = concatName(firstName, lastName);
    std::cout << fullName << std::endl;

    return 0;
}
