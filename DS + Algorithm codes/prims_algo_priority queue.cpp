#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;


vector<pair<int,int> >vp[100];

int parent[100];
int cost[1000];

int prim(int s)
{
    priority_queue<pair<int,int> >pq;
    pq.push(mp(0,-s));
    bool visited[100];
    memset(visited,false,sizeof(visited));

    //memset(cost,,sizeof(cost));
    for(int i=0;i<100;i++)
        cost[i]=INT_MAX;

    parent[s]=-1;
    int price=0,u,v,w;
    while(!pq.empty())
    {
        pair<int,int> p = pq.top();
        pq.pop();

        price+=(-1)*p.first;
        u= (-1)*p.second;
        //cout<<u<<" "<<(-1)*p.first<<endl;
        visited[u]=true;

        for(int i=0; i<vp[u].size(); i++)
        {
            w = vp[u][i].first;
            v = vp[u][i].second;
            //out<<INT_MAX<<endl;
            if(!visited[v] && cost[v]>w)
            {
                cost[v]=w;
                //cout<<"w"<<endl;
                parent[v]=u;
                pq.push(mp(-w,-v));
            }

        }
    }
    return price;

}
int main()
{
    int n,m,u,v,w;
    cin>>n>>m;

    for(int i =0; i<m; i++)
    {
        cin>>u>>v>>w;
        vp[u].pb(mp(w,v));
        vp[v].pb(mp(w,u));
    }


   int price = prim(1);

    cout<<"Edges : "<<endl;
    for(int i=2; i<=n; i++)
    {
        printf("%d -> %d :  %d\n",parent[i],i,cost[i]);
    }
    cout<<"total cost MST : "<<price<<endl;
    return 0;

}
