#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>arr={1,2};
int cnt=1,i;
        vector<int>store;
        sort(arr.begin(), arr.end());
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[i+1] && i<arr.size()-1)
            {
                cnt++;
            }
            else
            {store.push_back(cnt);
                cnt = 1;
            }

        }

        for(i=0;i<store.size();i++)
            cout<<store[i]<<endl;
        int flag=0;
        sort(store.begin(), store.end());
        for(i=0;i<store.size()-1;i++)
        {
            if(store[i]==store[i+1])
                flag=1;
        }
        if(flag)
            cout<<"true";
        else
            cout<<"false";



}
