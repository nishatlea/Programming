#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums;
    nums.push_back(0);
    //nums.push_back(1);
    //nums.push_back(0);
    //nums.push_back(3);
    //nums.push_back(12);
    int len = nums.size();
        int i,temp,check, flag[len];
        memset(flag,0,len);
        for(i=0;i<len;i++)
        {
            if(nums[i]!=0)
            {
              if(i>0)
              {
                 check = i;
                  for(check=0;check<i;check++)
                  {
                      if(nums[check] == 0)
                      {//nums.insert(nums.begin()+check,nums[i]);
                       //nums.insert(nums.begin()+i, 0);
                       nums[check] = nums[i];
                       nums[i] = 0;

                       break;
                      }
                  }
              }
            }
        }

        for(i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
}
