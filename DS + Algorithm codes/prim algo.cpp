#include<bits/stdc++.h>

using namespace std;
vector<pair<int,int> > vp[100];


int prim(int s,int n)
{
    int min_w=0,mst=0;
    int visited[n+2];
    int cost[n+2];
    memset(visited,0,sizeof(visited));
    memset(cost,1000000,sizeof(cost));

    int node=0,i,v,w;
   int  min_v=s;

    while(node!=n)
    {
        s = min_v;
        visited[s]=1;
        cost[min_v]=0;
        mst+=min_w;
        node++;
        min_w= 1000000;
        for(i=0; i<vp[s].size(); i++)
        {
            v = vp[s][i].first;
            w = vp[s][i].second;

            if(!visited[v])
            {
          //      cout<<v<<" "<<w<<endl;
//                if(min_w>w)
//                {
//                    min_w=w;
//                    min_v = v;
//                }
                if(cost[v]>w)
                {

                    cost[v]= w;
                }
            }
        }

        for(i=0; i<=n; i++)
        {
            if(cost[i]<min_w && !visited[i])
            {
                min_w = cost[i];
                min_v = i;
            }
        }
        //cout<<endl<<min_v<<" "<<min_w<<endl;
    }
    return mst;

}

int main()
{

    int n,i,m,v,u,w;
    cin>>m>>n;

    for(i=0; i<n; i++)
    {
        cin>>u>>v>>w;

        vp[u].push_back(make_pair(v,w));
        vp[v].push_back(make_pair(u,w));
    }

    cout<<"MST : "<<prim(1,m)<<endl;

}
