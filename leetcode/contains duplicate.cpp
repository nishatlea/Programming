#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<int>nums = { 2,14,18,22,22};
   sort(nums.begin(), nums.end());
        int i,flag=0;
        for(i=0;i< nums.size()-1;i++)
        {
            cout<<i<<endl;
            if(nums[i] == nums[i+1])
                {
                flag=1;

                }


        }
        if(flag)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;

}
