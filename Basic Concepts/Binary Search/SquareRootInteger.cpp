
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int sqrtBinarySearch(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int left = 0;
    int right = x;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {

            result = mid;
            cout<<result<<endl;
            left = mid + 1;
        } else {

            right = mid - 1;
            cout<<right<<endl;
        }
    }

    return result;
}

int main() {
    int num ;
    cin>>num;

    int result = sqrtBinarySearch(num);

    cout<< result << endl;

    return 0;
}
