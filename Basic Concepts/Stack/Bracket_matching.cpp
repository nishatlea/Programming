#include <iostream>
#include <stack>
#include <string>

bool isBracketBalanced(const std::string& expr) {
    std::stack<char> brackets;

    for (char bracket : expr) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            brackets.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (brackets.empty()) {
                return false;
            } else if ((bracket == ')' && brackets.top() == '(') ||
                       (bracket == ']' && brackets.top() == '[') ||
                       (bracket == '}' && brackets.top() == '{')) {
                brackets.pop();
            } else {
                return false;
            }
        }
    }

    return brackets.empty();
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (isBracketBalanced(input)) {
        std::cout << "Brackets are balanced." << std::endl;
    } else {
        std::cout << "Brackets are not balanced." << std::endl;
    }

    return 0;
}
