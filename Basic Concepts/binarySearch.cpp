#include<bits/stdc++.h>
using namespace std;

int main()
{
    int high, low =0 ;
    cin>>high;
    int a[high], mid, flag=0;
    int i, target;
    for(i=0; i<high; i++)
        cin>>a[i];

    cin>>target;
    mid = (low+high)/2;
    while(low<=high)
    {


        if (a[mid] == target)
        {
            cout<<mid<<endl;
            flag = 1;
            break;
        }
        else if (a[mid]<target)
        {
            low= mid+1;
            mid = (high+low)/2;

        }
        else if(a[mid]> target)
        {
            high = mid-1;
            mid = (high+low)/2;

        }
    }
    if(!flag)
        cout<<"Element not found"<<endl;

}
