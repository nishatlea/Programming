#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    int v,e,i,j,a,b,k;
    cout<<"node: "<<endl;
    cin>>v;
    cout<<"edge: "<<endl;
    cin>>e;
    int matrix[v+1][v+1];
    int visited[v+1];
    memset(matrix,0, sizeof(matrix));
    memset(visited,0,sizeof(visited));

    for (i=0 ; i<e ; i++)
    {   cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    queue<int>q;
    q.push(3);
    visited[3]=1;
    for(i = 1 ; i<=v ; i++)
    {
        k = q.front();
        cout<<k<<" " ;
        q.pop();
        for (j= 1; j<=v; j++)
        {
            if (matrix[k][j]==1 && visited[j]==0 )
        {
                q.push(j);
                visited[j]=1;
            }
        }
    }

  return 0;

}
