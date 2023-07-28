#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,temp,j;
    int a[5]={2,3,1,10,9};
    //sort(a);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }
    for(i=0;i<5;i++)
        cout<<a[i]<<endl;
}
