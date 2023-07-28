/*#include<bits/stdc++.h>
using namespace std;
/*
vector<int> adj[5];

void addedge(int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
 int node = 5;
 adj[1].push_back(4);
 adj[1].push_back(3);
 adj[1].push_back(2);
 adj[2].push_back(1);
 adj[3].push_back(1);
 adj[3].push_back(4);
 adj[4].push_back(3);

 for (auto i = 1; i<5; i++)
    {cout<< "vertex no "<<i<<endl;
    for( auto x : adj[i])
        cout<<x<<endl;
    }
}
*/

//bfs

#include<bits/stdc++.h>
#include<cstdio>
#include<stack>
using namespace std;

int main()
{

    int v,e,a,b,i,j,r,k;

    cout<<"Enter number of nodes : ";cin>>v;
    cout<<"Enter number of edges : ";cin>>e;
    int matrix[v+1][v+1];
    int visited[v+1];

    memset(matrix,0,sizeof(matrix));
    memset(visited,0,sizeof(visited));

    for(int i=0;i<e;i++)
    {
        cin>>a>>b;

        matrix[a][b]=1;
        matrix[b][a]=1;
    }


    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;



    stack<int>s;
    bool flag;
    s.push(3);
    visited[3]=1;
    for(i=1;i<=v;i++)
    {

        k = s.top();
        cout<<k<<" ";
        s.pop();
        visited[k]=1;

        for(j=1;j<=v;j++)
        {
            if(matrix[k][j]==1 && visited[j]==0){
                s.push(j);
                visited[j]=1;
               // cout<<j<<" ";


            }
        }



    }

return 0;
}


