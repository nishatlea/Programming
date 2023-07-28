#include<bits/stdc++.h>
using namespace std;

//int checkdigit()

int main()
{
    string p;
    cin>>p;
    int s = p.size();
    int sum=0, n1,n2,n3, check[s],i;
    for(i=0;i<s;i++)
        check[i]=0;
    int temp=0, plusflag=0;
    for(i=0;i<s-1;i++)
    {

        if(p[i]== '*')
        {
          plusflag=1;
         n2= int( p[i+1]-'0');
          if( check[i-1]==1)
          {
            temp = check[i-2]*n2;
             cout<<"test "<<temp<<endl;
             //if(plusflag )
                //{sum+=temp;
                 //plusflag=0;
                //}
             //else
               //sum+=temp;
            check[i]= temp;
            check[i+1]= 1;
            check[i-1]= 1;

          }
          else if(check[i-1]==0)
        {
          n2= int( p[i+1]-'0');
          n1= int(p[i-1]-'0');
          temp = n1*n2;
          //sum += temp;
          check[i]= temp;
          check[i+1]=1;
          check[i-1]=1;
        }
        }
       if((p[i]=='+' || i+1== s-1) && plusflag ==1)
        {plusflag=0;
        sum+= temp;
        }

    }
    for(i=0;i<s+1;i++)
    {
        if(p[i]=='+')
        {
            if(check[i-1]==0)
                {sum+= int(p[i-1] - '0');
                 check[i-1]=1;
                }
            if(check[i+1]==0)
                 { sum+= int (p[i+1] - '0');
                   check[i+1]=1;
                 }
        }
    }

//for(i=0;i<s;i++)
    //cout<<check[i]<<endl;
    cout<<sum;
}
