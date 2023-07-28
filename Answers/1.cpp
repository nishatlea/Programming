#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour1,minit1,hour2,minit2,t2,temp,second1,second2;
    cin>>hour1>>minit1>>second1;
    if(second1==60 || second1==0)
        second2=0;
    else
        second2 = 60-second1;
    //int t1= minit1%12;
    if(hour1==12)
    {
        if(minit1>0)
          hour2=12-1;
        else
         hour2 = hour1;
    }
    else
    {
        if(minit1>0)
        {
            hour2= 12-hour1-1;
        }
        else
            hour2 = 12-hour1;

    }

        if(second1==0)
        {
            if(minit1==0)
                minit2=0;
            else
                minit2= 60-minit1;
        }
        else
        {
            if(minit1==0)
                minit2=59;
            else
                minit2= 60-minit1-1;
        }
    //minit2= t2*5;


    cout<<hour2<<" "<<minit2<<" "<<second2;

}
