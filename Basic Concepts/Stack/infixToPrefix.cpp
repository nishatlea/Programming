
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

std::string infixToPrefix(const std::string& infix) {
    std::stack<char> operators;
    std::string prefix;

    std::string reversedInfix = infix;
    std::reverse(reversedInfix.begin(), reversedInfix.end());

    for (char c : reversedInfix) {
        if (isalnum(c)) {
            prefix += c;
        } else if (c == ')') {
            operators.push(c);
        } else if (c == '(') {
            while (!operators.empty() && operators.top() != ')') {
                prefix += operators.top();
                operators.pop();
            }
            operators.pop();
        } else {
            while (!operators.empty() && precedence(c) < precedence(operators.top())) {
                prefix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        prefix += operators.top();
        operators.pop();
    }

    std::reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    std::string infixExpr;
    std::getline(std::cin, infixExpr);

    std::string prefixExpr = infixToPrefix(infixExpr);
    std::cout << prefixExpr << std::endl;

    return 0;
}
