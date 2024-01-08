
#include <iostream>
#include <vector>

int lengthOfLIS(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    std::vector<int> dp(n, 1);
    int maxLength = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        maxLength = std::max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    std::vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int result = lengthOfLIS(nums);
    std::cout << "Length of the longest strictly increasing subsequence: " << result << std::endl;

    return 0;
}
