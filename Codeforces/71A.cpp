#include<bits/stdc++.h>
using namespace std;

int main()
{
/*string a = "abc";
int p ;
p = a.size();
cout<<p;*/
int n;
cin>>n;
while(n--)
{
    string a;
    cin>>a;
    int len =0;
    len = a.size();
    if(len<=10)
        cout<<a<<endl;
    else
        cout<<a[0]<<len-2<<a[len-1]<<endl;
}
}
