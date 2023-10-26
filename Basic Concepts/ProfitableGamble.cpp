
#include <iostream>

bool profitableGamble(double prob, double prize, double pay) {
    return (prob * prize) > pay;
}

int main() {
    double prob;
    double prize;
    double pay;

    std::cin>>prob>>prize>>pay;

    if (profitableGamble(prob, prize, pay)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
