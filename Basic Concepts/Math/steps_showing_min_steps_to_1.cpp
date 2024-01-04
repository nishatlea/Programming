#include <iostream>
#include <vector>
#include <algorithm>

int minStepsToOne(int n) {
    if (n == 1) return 0;

    std::vector<int> dp(n + 1);
    dp[1] = 0;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = std::min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = std::min(dp[i], dp[i / 3] + 1);
    }

    return dp[n];
}

void printSteps(int n) {
    while (n != 1) {
        std::cout << n << " ";
        if (n % 3 == 0 && minStepsToOne(n / 3) + 1 == minStepsToOne(n)) {
            n /= 3;
        } else if (n % 2 == 0 && minStepsToOne(n / 2) + 1 == minStepsToOne(n)) {
            n /= 2;
        } else {
            --n;
        }
    }
    std::cout << "1\n";
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Minimum number of steps: " << minStepsToOne(n) << std::endl;
    std::cout << "Steps taken: ";
    printSteps(n);

    return 0;
}
