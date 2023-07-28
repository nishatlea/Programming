#include<bits/stdc++.h>
#define sz 100
using namespace std;
const int MAX = 10000;

int admatrix[sz][sz];
int dis[sz][sz];
int p [sz][sz];
void in(int node)
{
    int i,j;
    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
        {

            if(admatrix[i][j]!=0)
                dis[i][j]=admatrix[i][j];
            else
                dis[i][j]= MAX;

            p[i][j]=i;
        }
    }

}




void printpath(int s,int d)
{
    if(s==d)
    {
        cout<<s<<" ";
        return;
    }
    printpath(s,p[s][d]);
    cout<<d<<" ";
}


void printnegative(int s,int d)
{
    if(s==d)
    {

        cout<<s<<" ";
        return;
    }
    printnegative(s,p[s][d]);
    cout<<d<<" ";
}

int main()

{
    int n,e,i,u,v,w,j,s,d;
    cout<<"Enter the number of node and edge : ";
    cin>>n>>e;

    for(i=0; i<e; i++)
    {
        cin>>u>>v>>w;admatrix[u][v]=abs(w);
    }


    in(n);
    int k;

    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(dis[i][j]>dis[i][k]+dis[k][j])
                {
                    dis[i][j]= dis[i][k]+dis[k][j];
                    //if(dis[i][j]<0 && i==j)
                    // continue;
                    p[i][j]=p[k][j];
                }
            }

        }

    }

    bool flag = false;

    for(i=1; i<=n; i++)
    {
        if(dis[i][i]<0)
            flag = true;
        cout<<dis[i][i]<<endl;
    }
    if(flag)
    {
        cout<<"negative cycle \n\n";
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

//        for(i=1;i<=n;i++)
//        {
//            if(i!=2)
//             printnegative(i,p[i][i]);
//            cout<<endl<<endl;
//        }

//        cout<<endl;
//        printnegative(1,p[1][1]);
//        cout<<endl;
//        printnegative(3,p[3][3]);
//        cout<<endl;
//        printnegative(4,p[4][4]);
    }
    else
    {
        cout<<"negative cycle \n\n";
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;
        for(i=1; i<=n; i++)
        {
            if(i!=2)
             printnegative(i,p[i][i]);
            cout<<endl<<endl;
        }

//            cout<<"Enter the source the destination : ";
//        cin>>s>>d;
//        cout<<"distance : "<<dis[s][d]<<endl;
//
//        cout<<"path : "<<endl;
//        printpath(s,d);
    }

    return 0;
}

