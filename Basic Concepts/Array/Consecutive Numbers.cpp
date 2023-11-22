#include <iostream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool canFormConsecutiveList(std::vector<int>& nums) {
    int n = nums.size();
    std::sort(nums.begin(), nums.end());

	for(int i = 0; i < n-1; ++i)
	{
		if(nums[i]+1 != nums[i+1])
			return false;
	}
	return true;

}

int main() {
    int length;
    cin>>length;
    vector<int> arr;
    int i, val=0;
    for(i=0;i<length; i++)
    {   cin>>val;
        arr.push_back(val);

    }



    if (canFormConsecutiveList(arr)) {
        cout << "true"<<endl;
    } else {
        std::cout << "false"<<endl;
    }


    return 0;
}
