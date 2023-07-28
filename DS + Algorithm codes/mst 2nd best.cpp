#include<bits/stdc++.h>
using namespace std;
int parent[100];
int totalnode,nod1,nod2,totaledge,weight;
pair<int,pair<int,int> > value;
 vector< pair<int,pair<int,int> > >edges;
int mst_edges=0,edge_count=0,mst_weight=0;
 vector< pair<int,pair<int,int> > >myedges;
stack< pair<int,pair<int,int> > >edges2nd;
int cnt=0;
int find_set(int x)
{
    if(parent[x]==x)
        return x;
    else
        return parent[x]=find_set(parent[x]);
}
void unite(int x,int y)
{
    int fx=find_set(x);
    int fy=find_set(y);
    parent[fy]=fx;
    return;
}
int kruskal( )
{

    cout<<"Kruskal no : "<<cnt<<endl;
    int i;
    for(i=1;i<=totalnode;i++)
        parent[i]=i;

    for(i=1;i<=totaledge;i++)
    {
        cin>>nod1>>nod2>>weight;
        edges.push_back(make_pair(weight,make_pair(nod1,nod2)));
    }
    sort(edges.begin(),edges.end());

    cout<<"Output :"<<endl;
    while(mst_edges<totalnode-1 || edge_count<totaledge)
    {
        nod1=edges[edge_count].second.first;
        nod2=edges[edge_count].second.second;
        weight=edges[edge_count].first;
        if(find_set(nod1) != find_set(nod2))
        {
            mst_weight+=weight;
            cout<<nod1<<" "<<nod2<<" "<<weight<<endl;
            edges2nd.push(make_pair(weight,make_pair(nod1,nod2)));
            unite(nod1,nod2);
            mst_edges++;
        }
        edge_count++;
    }
    cout<<mst_weight;

}
int new_edges=0,new_weight=0;
int kruk( )
{
    cout<<"Kruk "<<endl;
    edge_count=0;
    while(new_edges<totalnode-1 || edge_count<totaledge)
    {
        nod1=myedges[edge_count].second.first;
        nod2=myedges[edge_count].second.second;
        weight=myedges[edge_count].first;
        if(find_set(nod1) != find_set(nod2))
        {
            new_weight+=weight;
            cout<<nod1<<" "<<nod2<<" "<<weight<<endl;
            edges2nd.push(make_pair(weight,make_pair(nod1,nod2)));
            unite(nod1,nod2);
            new_edges++;
        }
        edge_count++;
    }
    cout<<new_weight;

}
int flag=0;
int find_edge( )
{
    vector< pair<int,pair<int,int> > > :: iterator i,j;
    i=edges.begin();
    j=myedges.begin();
   for(i;i!=edges.end();i++)
   {
       for(j;j!=myedges.end();j++)
       {
           if(*i== *j)
           {
             flag=1;
           }
       }
       if(!flag && *i!=value )
        {
            myedges.push_back(*i);
        }
   }
   kruk();
}

int main()
{

    cin>>totalnode>>totaledge;
    if(totaledge==totalnode-1)
        cout<<"No Second way "<<endl;
    else
    {
        kruskal( );
        value=edges2nd.top();
        edges2nd.pop();
        while(!edges2nd.empty())
        {
            myedges.push_back(edges2nd.top());
            edges2nd.pop();
        }

    }

    return 0;
}
