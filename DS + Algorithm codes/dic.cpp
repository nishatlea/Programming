#include<bits/stdc++.h>

using namespace std;
string dic[]={"i","like","samsung","sam","sung","mobile","icecream","ice","cream","mango","man","go"};
//string c[]={cream},i[]={i,ice,icecream},l[]={like},g[]={go},m[]={mobile,man,mango},s[]={sam,sung,samsung};
int n;
int size_a[]={1,4,7,3,4,6,8,3,5,5,3,2};
int visited[13];

string sol="";
void str_match(string str,string sol,int index)
{
    int i,k,j;
    string temp="";
    if(index==n)
    {
        cout<<sol<<endl;
        return;
    }

    for(i=0;i<12;i++)
    {
        for(k=index;k<index+size_a[i];k++)
        {
            temp+=str[k];
        }
        if(temp==dic[i] && visited[i]==0)
        {
            sol+=temp;
            sol+=" ";
            index = k;
            visited[i]=1;
            if(dic[i]=="samsung"){
                    str_match(str,sol,index);
                    string solo="";
                    for(j=0;j<sol.size()-8;j++)
                        solo+=sol[j];
                    sol=solo;
                    str_match(str,sol,index-7);
            }

            else if(dic[i]=="icecream")
                {
                    str_match(str,sol,index);
                    string solo="";
                    for(j=0;j<sol.size()-9;j++)
                        solo+=sol[j];
                    sol=solo;
                    str_match(str,sol,index-8);
                }
            else if(dic[i]=="mango")
            {
                str_match(str,sol,index);
                string solo="";
                    for(j=0;j<sol.size()-6;j++)
                        solo+=sol[j];
                    sol=solo;
                str_match(str,sol,index-5);
            }
             else
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
