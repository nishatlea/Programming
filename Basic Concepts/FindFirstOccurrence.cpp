#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int findFirstOccurrence(int right, int nums[], int target) {
    int left = 0;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {

            result = mid;

            right = mid - 1;
        } else if (nums[mid] < target) {

            left = mid + 1;
        } else {

            right = mid - 1;
        }
    }

    return result;
}

int main() {
   int length,i;
   cin>>length;
   int sortedArray[length] ;
   for(i=0;i<length;i++)
    cin>>sortedArray[i];
    int target ;
    cin>>target;

    int result = findFirstOccurrence(length, sortedArray, target);

    if (result != -1) {
        cout << result << endl;
    } else {
        cout<< "Element not found"<<endl;
    }

    return 0;
}
