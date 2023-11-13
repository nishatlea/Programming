#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int searchInRotatedArray(int right , int nums[], int target) {
    int left = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }


        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {

                right = mid - 1;
            } else {

                left = mid + 1;
            }
        } else {

            if (nums[mid] < target && target <= nums[right]) {

                left = mid + 1;
            } else {

                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
   int length,i;
   cin>>length;
   int rotatedArray[length] ;
   for(i=0;i<length;i++)
    cin>>rotatedArray[i];
    int target ;
    cin>>target;

    int result = searchInRotatedArray(length, rotatedArray, target);

    if (result != -1) {
       cout << result << endl;
    } else {
        cout <<  "Element not found" << endl;
    }

    return 0;
}

