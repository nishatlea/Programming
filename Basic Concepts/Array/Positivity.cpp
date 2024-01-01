#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n], i;
for(i=0; i<n ;i++)
{cin>>a[i];
}
int pos = 0, neg = 0;
for(i=0;i<n;i++)
{
 if(a[i]>=0)
 pos++;
 else
 neg++;
}

if(pos>neg)
cout<<"Positivity"<<endl;
else
cout<<"Negativity"<<endl;

}
