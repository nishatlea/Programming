#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePostfix(const std::string& expression) {
    std::stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (isOperator(c)) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
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
    std::string postfixExpr;
    std::getline(std::cin, postfixExpr);

    int result = evaluatePostfix(postfixExpr);
    std::cout<< result << std::endl;

    return 0;
}

