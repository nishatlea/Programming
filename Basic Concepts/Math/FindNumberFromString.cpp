#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int length = s.length();
int i;
char p;
for(i=0;i<length;i++)
{
if(s[i]-'0'>= 0 && s[i]-'0'<=9)
{
    p=s[i];
}
}
cout<<p<<endl;
}
