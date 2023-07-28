#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Give the values of n : "<<endl;
    int n,p,i,j,k;
    cin>>n;
    p=n+1;
    double a[p][p],u[p][p],l[p][p],b[p],v;
    memset(a,0,sizeof(a));
    memset(u,0,sizeof(u));
    memset(l,0,sizeof(l));
    cout<<"Give the values of matrix "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>v;
            a[i][j]=v;
            //cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Give the right side value of the matrix : "<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>v;
        b[i]=v;
    }
    for(i=1;i<=n;i++)
    {
        u[1][i]=a[1][i];
        l[i][i]=1;
    }
    double s=0.0,m;
    for(j=2;j<=n;j++)
    {
        for(i=2;i<=j;i++)
        {

            for(k=1;k<=j-1;k++)
            {
                m = ( l[i][k] * u[k][j] );
                cout<<"i j m "<<i<<" "<<j<<" "<<k<<" "<<m<<endl;
                s = s + ( l[i][k] * u[k][j] );
            }
            //cout<<s<<" s ";
            u[i][j]=( a[i][j]- s);
            //cout<<"*** u"<<u[i][j]<<endl;
            s=0.0;
        }

        for(i=j+1;i<=n;i++)
        {
            s=0.0;
            for(k=1;k<j-1;k++)
            {
                s+=(l[i][k] * u[k][j]);
            }
            l[i][j]= (1.0/u[j][j])*(a[i][j]-s);

            //cout<<"***l"<<l[i][j]<<endl;
        }
    }
    cout<<"Lower matrix : "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Higher matrix : "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<u[i][j]<<" ";
        }
        cout<<endl;
    }
    double z[p];
    z[1]=b[1];
    for(i=2;i<=n;i++)
    { s=0;
        for(j=1;j<=i-1;j++)
        {
            s+=(l[i][j]*z[j]);
        }
        z[i]=b[i]-s;
    }
    double x[p];
    x[n]=(z[n]/u[n][n]);
    for(i=n-1;i>=1;i--)
    {s=0;
        for(j=i+1;j<=n;j++)
        {
           s+= (u[i][j]*x[j]) ;
        }
        x[i]=(z[i]-s)/u[i][i];
    }
    cout<<"Answer : "<<endl;
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";




}
