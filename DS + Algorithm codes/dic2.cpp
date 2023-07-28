#include<bits/stdc++.h>

using namespace std;
string dic[]={"i","like","sam","sung","samsung","mobile","ice","cream","icecream","man","go","mango"};
//string c[]={cream},i[]={i,ice,icecream},l[]={like},g[]={go},m[]={mobile,man,mango},s[]={sam,sung,samsung};
int n;
int size_a[]={1,4,3,4,7,6,3,5,8,3,2,5};
int visited[13];

string sol="";
void str_match(string str,string sol,int index)
{
    int i,k,j=0;
    string temp="";
    if(index==n)
    {
        cout<<sol<<endl;

        return;
    }

    for(i=0;i<12;i++)
    {
        for(k=0;k<size_a[i];k++,j++)
        {
            temp+=str[j];
        }
        if(temp==dic[i] && visited[i]==0)
        {
            sol+=temp;
            sol+=" ";
            visited[i]=1;
            index=j;
            str_match(str,sol,index);
        }
        else{
            temp="";
        }
    }

}


int main()
{
    string str;

    cin>>str;

    n = str.size();
    str_match(str,sol,0);

    return 0;




}

