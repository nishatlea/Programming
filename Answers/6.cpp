#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n,i,l;
    cin>>a>>n;
    int t;
    t= a.size();
    //cout<<t;
    int v = n-t;
    //cout<<v;

    l= v/2;
    //cout<<l<<endl;
    if(v%2==0)
    {
        for(i=0;i<l;i++)
            cout<<"*";
        cout<<a;
         for(i=0;i<l;i++)
            cout<<"*";
    }
    else
    {
        //cout<<"odd"<<endl;
        for(i=0;i<l+1;i++)
            cout<<"*";
        cout<<a;
         for(i=0;i<l;i++)
            cout<<"*";

    }

}
