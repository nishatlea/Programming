#include<bits/stdc++.h>
#include<Math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, num[n], target,j;
    for(i=0;i<n;i++)
        cin>>num[i];
    cin>>target;

    int res[2], flag =0, sam, val;
    res[0]=0;
    res[1]=0;


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
             sam = num[i]+num[j];
             //cout<<sam<<endl;

              if(sam == target)
                {
                    res[0]=i;
                    res[1]=j;
                    flag=1;
                    break;
                }
        }
        if(flag)
            break;
    }

    cout<<res[0]<<" "<<res[1]<<endl;
}
