#include <iostream>
#include <stack>
#include <string>
#include <cctype>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePrefix(const std::string& expression) {
    std::stack<int> operands;

    for (int i = expression.length() - 1; i >= 0; --i) {
        char c = expression[i];
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (isOperator(c)) {
            int operand1 = operands.top();
            operands.pop();
            int operand2 = operands.top();
            operands.pop();

            int result;
            switch (c) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    std::string prefixExpr;
    std::getline(std::cin, prefixExpr);

    int result = evaluatePrefix(prefixExpr);
    std::cout << result << std::endl;

    return 0;
}
