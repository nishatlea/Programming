#include <iostream>
#include <vector>
#include <algorithm>

int minStepsToOne(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    std::vector<int> dp(n + 1);
    dp[1] = 0;

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = 1 + dp[i - 1];
        if (i % 2 == 0)
        {
            dp[i] = std::min(dp[i], 1 + dp[i / 2]);
        }
        if (i % 3 == 0)
        {
            dp[i] = std::min(dp[i], 1 + dp[i / 3]);
        }
    }

    return dp[n];
}

int main()
{
    int n;
    std::cin >> n;


    int steps = minStepsToOne(n);
    std::cout<< steps << std::endl;


    return 0;
}
