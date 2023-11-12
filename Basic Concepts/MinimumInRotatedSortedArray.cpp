#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findMinInRotatedArray(int right, int nums[]) {
    int left = 0;
    right-=1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {

            left = mid + 1;
        } else {

            right = mid;
        }
    }

    return nums[left];
}

int main() {
   int length,i;
   cin>>length;
   int rotatedArray[length] ;
   for(i=0;i<length;i++)
   cin>>rotatedArray[i];

    int minElement = findMinInRotatedArray(length, rotatedArray);

    cout  << minElement << endl;

    return 0;
}
