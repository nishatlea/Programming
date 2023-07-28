#include<bits/stdc++.h>
using namespace std;

int a[100];
int n;
int Getfiltered(int skip,int pageSize,int PageNumber,int sortOrder)
{
    int i,j,temp;
    if(sortOrder==0)
    {
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<0;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }

    }
    if(sortOrder==1)
    {
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<0;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }

    }
    int start = skip+ (PageNumber-1)* pageSize ;
    //cout<<start<<endl;
    //int page[pageSize];
    if(start>=n)
        cout<<"No data found"<<endl;
    else
        {
    int finish = start+pageSize;
    for(i= start; i<finish; i++)
    {
        if(i==n)
            break;
        cout<<a[i]<<" ";
    }
    cout<<endl;
        }

return 0;
}
int main()
{
memset(a,0,100);
 //int n;
 cin>>n;
 int ar[n];
 int i;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
     //a[i]=ar[i];
 }
 int skip,pageSize,PageNumber,sortOrder;
 cin>>skip>>pageSize>>PageNumber>>sortOrder;
 Getfiltered(skip,pageSize,PageNumber,sortOrder);

 //n=8;

 /*a[0]=8;
 a[1]=6;
 a[2]=12;
 a[3]=18;
 a[4]=2;
 a[5]=6;
 a[6]=9;
 a[7]=10;
 Getfiltered(2,2,2,0);*/
}
