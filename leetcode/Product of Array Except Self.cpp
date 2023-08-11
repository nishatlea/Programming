#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums = {1,2,3,4};
    int length = nums.size();
    int left[length], right[length];
    memset(left,0,length);
    memset(right,0,length);
    int i,j, leftVal=1, rightVal= 1;
    for(i=0,j=length-1;i<length,j>=0;i++,j--)
    {
    leftVal = leftVal*nums[i];
    left[i]=leftVal;
    rightVal = rightVal*nums[j];
    right[i] = rightVal;
    }

    vector<int>ans(length);
    length--;
    for(i=0;i<=length;i++)
    {
    if(i==0)
        ans[i] = right[length-i-1];
    else if(i==length)
        ans[i] = left[i-1];
    else
        ans[i] = left[i-1]*right[length-i-1];
    }

    for(i=0;i<length+1;i++)
    cout<<ans[i]<<endl;
}
