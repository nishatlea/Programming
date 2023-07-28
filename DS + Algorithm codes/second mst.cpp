#include<bits/stdc++.h>

using namespace std;
struct edges
{
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
    for(i=0; i<=n; i++)
        p[i]=i;
}

int finds(int x)
{
    if(p[x]==x)return x;

    return p[x]= finds(p[x]);
}


int kruskal(int m,int n,int c)
{
    int cost=0,i,j=0,ed=0;
    if(c==2)
    {
        pi(n);
        sort(reject.begin(),reject.end());
        p[reject[0].u] = p[reject[0].v];

        cost+=reject[0].w;

        reject.clear();

        ed=1;

    }

    sort(ve.begin(),ve.end());

    int sz =ve.size();

    if(c==1)
        pi(n);

    for(i=0; i<sz; i++)
    {
        //if(ed == n-1 && c==2)
            //break;
        if(finds(ve[i].u)!=finds(ve[i].v))
        {
            p[p[ve[i].u]]= p[ve[i].v];

            cost+=ve[i].w;
            // res.push_back(ve[i]);
            ed++;
        }
        else
        {
            reject.push_back(ve[i]);

        }


    }

    return cost;
//    for(i=0;i<res.size();i++)
//        cout<<res[i].u<<" -> "<<res[i].v<<" :  "<<res[i].w<<endl;
//
//
//        cout<<endl<<cost<<endl;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,cases=0,t;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        edges e;

        int co1=0,co2=0;
        ve.clear();
        for(int i=0; i<m; i++)
        {
            cin>>e.u>>e.v>>e.w;
            ve.push_back(e);
        }

        if(m<n-1)
        {
            printf("Case #%d : No way\n",++cases);
            //cout<<"NO WAY"<<endl;
        }
        else
        {
                co1=kruskal(m,n,1);
            if(n-1==m)
                {
                        printf("Case #%d : No second way\n",++cases);
                        continue;
                }
            else if(n-1!=m)
                co2=kruskal(m,n,2);
           //cout<<co1<<endl<<co2<<endl;
            if(co1==co2 && co1 && co2)
                printf("Case #%d : No second way\n",++cases);
            else
                printf("Case #%d : %d\n",++cases,co2);
        }
    }

    return 0;

}

