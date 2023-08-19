#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>nums = {-6,2,5,-2,-7,-1,3};
int target = -2;
sort(nums.begin(), nums.end());
int left=0, right=nums.size()-1;
int cnt =0;

while(left < right)
{
if(nums[left]+nums[right] < target)
{
 cnt+= (right-left);
 left+=1;
}
else
right-=1;

}
cout<<cnt;
}
