#include<bits/stdc++.h>
using namespace std;
string dict[]={"i", "like" , "sam","sung" ,"samsung" , "mobile", "ice" ,"cream" , "icecream" ,"man" ,"go" ,"mango"};
vector<string>p;
int visited[13];
string st[20];




void backtrack(int a,int n)
{int i;
    if(a==n)
    {
        for(i=0;i<n;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            visited[i]=1;
            st[a]=p[i];
            backtrack(a+1,n);
            visited[i]=0;
        }
    }



}
int main()
{
    memset(visited,0,sizeof(visited));
    string a;
    cin>>a;
    int i ;
    string b,c;
    for(i=0;i<13;i++)
    {
        if(a.find(dict[i]))
            p.push_back(dict[i]);
    }
    int l=p.size();
    cout<<" i like "<<backtrack(2,l);

}
