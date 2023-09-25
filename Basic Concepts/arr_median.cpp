#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array to find the median
    sort(arr.begin(), arr.end());

    double median;
    if (n % 2 == 0) {
        // If the number of elements is even, take the average of the middle two elements
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        // If the number of elements is odd, the median is the middle element
        median = arr[n / 2];
    }

    // Calculate the sum of elements less than the median
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < median) {
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
