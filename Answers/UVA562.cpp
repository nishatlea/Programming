#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num ;
        cin>>num;
        int val[num], i, sam =0;
        for(i=0;i<num;i++)
        {cin>>val[i];
         sam+= val[i];
        }
        if(sam%2 == 0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}
