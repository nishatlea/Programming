#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

std::string prefixToPostfix(const std::string& prefix) {
    std::stack<std::string> operands;

    for (int i = prefix.length() - 1; i >= 0; --i) {
        if (isOperator(prefix[i])) {
            std::string operand1 = operands.top();
            operands.pop();
            std::string operand2 = operands.top();
            operands.pop();

            std::string result = operand1 + operand2 + prefix[i];
            operands.push(result);
        } else {
            operands.push(std::string(1, prefix[i]));
        }
    }

    return operands.top();
}

int main() {
    std::string prefixExpr;
    std::getline(std::cin, prefixExpr);

    std::string postfixExpr = prefixToPostfix(prefixExpr);
    std::cout << postfixExpr << std::endl;

    return 0;
}
