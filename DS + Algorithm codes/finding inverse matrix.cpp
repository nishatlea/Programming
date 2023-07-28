#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,largerow;
    cin>>n;
    float largest,a[n][n],b[n][n],x;
    largest=-1.0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>x;
            a[i][j]=x;
            if(a[i][j]>largest)
            {
                largest=a[i][j];
                largerow=i;
            }
        }
    }
    int k;
    float y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                b[i][j]=1;
            else
                b[i][j]=0;
        }
    }
    for(i=n-1,k=0,j=0;j<n;j++)
    {
        x=a[i][j],y=b[i][j];
        a[i][j]=a[k][j],b[i][j]=b[k][j];
        a[k][j]=x,b[k][j]=y;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
    float flag=0.0;
    for(i=0,j=0;j<n;j++)
    {
        a[i][j]=a[i][j]/largest;
        b[i][j]=b[i][j]/largest;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        k=i+1;
        for(j=0;j<n;j++)
        {
            a[k][j]=a[k][j]-a[i][j];
            b[k][j]=b[k][j]-b[i][j];
           // cout<<a[k][j]<<" ";
        }
        flag= 1/(a[k][k]);
        //cout<<flag<<"flag"<<endl;
        for(j=0;j<n;j++)
        {
            a[k][j]=a[k][j]*flag;
            b[k][j]=b[k][j]*flag;
            //cout<<a[k][j]<<" ";
        }

    }
    //cout<<endl<<"****"<<" ";
   /* cout<<a[2][2]<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }*/
    cout<<endl;
    for(k=1;k<n;k++)
    {
        for(i=0;i<n-k;i++)
        {
            flag=a[i][n-k];
            for(j=0;j<n;j++)
            {
                a[i][j]=a[i][j]-a[n-k][j]*flag;
            }
        }
        cout<<endl<<k<<endl;
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
    }
    //a matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
}
