#include<bits/stdc++.h>

using namespace std;
struct edges{
public:
    int u,v,w;
};

bool operator<(edges e1,edges e2)
    {
        return e1.w<e2.w;
    }

vector<edges>ve;
vector<edges>res;
vector<edges>reject;

int p[1000];
void pi(int n)
{
    int i;
    for(i=0;i<=n;i++)
        p[i]=i;
}

int finds(int x)
{
    if(p[x]==x)return x;

    return p[x]= finds(p[x]);
}


void kruskal(int m,int n)
{
    int cost=0,i,j=0;
    sort(ve.begin(),ve.end());
    int sz =ve.size();
    pi(n);
    for(i=0;i<sz;i++)
    {

        if(finds(ve[i].u)!=finds(ve[i].v))
        {
            p[p[ve[i].u]]= p[ve[i].v];
            cost+=ve[i].w;
            res.push_back(ve[i]);
        }

        reject[j++].push_back(ve[i]);

    }

//    for(i=0;i<res.size();i++)
//        cout<<res[i].u<<" -> "<<res[i].v<<" :  "<<res[i].w<<endl;
//
//
//        cout<<endl<<cost<<endl;
}
int main()
{
    int n,m;
    edges e;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>e.u>>e.v>>e.w;
        ve.push_back(e);
    }

     if(m<n-1)
    {
        cout<<"NO WAY"<<endl;
        return 0;
    }
    else {
        kruskal(m,n);
    }


}
