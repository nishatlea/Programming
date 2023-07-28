#include<iostream>
#include<vector>
#include<list>
#include<queue>
#define inf 1000000
using namespace std;

int totalnode,nod1,nod2,weight,edge,source;
vector< vector <pair <int,int > > >adjlist(100);
vector<int>parent;
vector<int>dist;
priority_queue<pair<int,int>>pq;
int pathfind(int dest)
{
    if(dest!=source && parent[dest]==-1)
        cout<<"Path not found "<<endl;
    else if(dest==source)
    {
        cout<<source;
        return 0;
    }
    pathfind(parent[dest]);
    cout<<" "<<dest;
}
int main()
{
    cin>>totalnode>>edge;
    int i;
    totalnode++;
    for(i=1;i<=edge;i++)
    {
        cin>>nod1>>nod2>>weight;
        adjlist[nod1].push_back(make_pair(nod2,weight));
    }
    parent.assign(totalnode,-1);
    dist.assign(totalnode,inf);
    cout<<"enter source node : "<<endl;
    cin>>source;
    dist[source]=0;
    pq.push(make_pair(-0,-source));
    while(!pq.empty())
    {
        pair<int,int>frnt;
        frnt=pq.top();
        pq.pop();
        int d,u;
        d=-frnt.first;
        u=-frnt.second;
        if(d>dist[u])
            continue;
        for(i=0;i<adjlist[u].size();i++)
        {
            pair<int,int>v=adjlist[u][i];
            if(dist[u]+v.second < dist[v.first])
            {
                dist[v.first]=dist[u]+v.second;
                parent[v.first]=u;
                pq.push(make_pair(-dist[v.first],-v.first));
            }
        }
    }

    int dest;
    cout<<"Enter destination "<<endl;
    cin>>dest;
    cout<<"cost: "<<dist[dest]<<endl;
    pathfind(dest);
}
