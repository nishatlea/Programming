#include <iostream>
#include <vector>

int searchInRotatedArray(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found
        }

        // Check if the left half is sorted
        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {
                // If target is in the left half, search in the left half
                right = mid - 1;
            } else {
                // If target is in the right half, search in the right half
                left = mid + 1;
            }
        } else {
            // If the right half is sorted
            if (nums[mid] < target && target <= nums[right]) {
                // If target is in the right half, search in the right half
                left = mid + 1;
            } else {
                // If target is in the left half, search in the left half
                right = mid - 1;
            }
        }
    }

    return -1; // Target not found
}

int main() {
    std::vector<int> rotatedArray = { 5, 6, 7, 0, 1, 2, 4};
    int target = 0;

    int result = searchInRotatedArray(rotatedArray, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}

