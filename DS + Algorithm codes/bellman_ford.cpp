#include<bits/stdc++.h>

using namespace std;






int n,m,s,d;
bool flag;
int p[1000];
int dis[1000];

int edgetake[1000];
//map<int,int>mp;
int mp[1000];
int sp[1000];
vector<pair<int,int> >ve[100];

void inmp(int n)
{
    int i;
    for(i=0; i<=n; i++)
        mp[i]=-1;
}

void inp(int n)
{
    int i;
    for(i=0; i<=n; i++)
        p[i]=-1;
}

void ind(int n)
{
    int i;
    for(i=0; i<=n; i++)
        dis[i]=100000;
}


bool bellman()
{
    int k,u,v,w,j;
    ind(n);
//    inp(n);

    p[s]=-1;

    dis[s]=0;

    for(k=1; k<=n-1; k++)
    {
        for(u=0; u<n; u++)
        {
            for(j=0; j<ve[u].size(); j++)
            {

                v = ve[u][j].first;
                w = ve[u][j].second;
                if(mp[u]!=v)
                {
                    if(dis[u]+ w < dis[v])
                    {
                        dis[v]= dis[u]+w;
                        //cout<<u<<" "<<v<<" "<<w<<endl;
                        p[v]=u;
                    }
                }

            }

        }
    }



    flag =false;

    for(u=0; u<n; u++)
    {
        for(j=0; j<ve[u].size(); j++)
        {
            v = ve[u][j].first;
            w = ve[u][j].second;

            if(dis[u]+ w <dis[v])
            {
                flag =true;
            }
        }

    }
    return flag;
}



void printpath(int p[])
{
    int u,v;
    stack<int>ss;
    u = p[d];
    ss.push(d);
    while(u!=-1)
    {
        ss.push(u);
        u = p[u];

    }
    cout<<"Cost of first shortest path : "<<dis[d];


    cout<<endl<<"path : ";

    u = ss.top();
    mp[s]=u;
    ss.pop();
    cout<<u<<" ";
    while(!ss.empty())
    {
        v= ss.top();
        ss.pop();
        mp[u] = v;
        u = v;
        cout<<v<<" ";
    }
    cout<<endl;


}



int main()
{
    int u,v,w,i,k,j,node;

    cout<<"Enter the node and edge : ";
    cin>>n>>m;

    //mp.clear();

    for(i=0; i<m; i++)
    {
        cin>>u>>v>>w;
        ve[u].push_back(make_pair(v,w));
        // ve.push_back(edge(u,v,w));
    }

    cout<<"enter the source and destination : ";
    cin>>s>>d;

    //memset(dis,0,sizeof(dis));

    memset(p,0,sizeof(p));

    inmp(n);

    flag = bellman();

    if(flag)
    {
        cout<<"negative edge is detected"<<endl;
        return 0;
    }

    printpath(p);
    for(i=0;i<n;i++)
    {
        if(mp[i]>=0)
         cout<<i<<" "<<mp[i]<<endl;
    }



 int maxa=10000000;
    for(node=0; node<n; node++)
    {

         //memset(p,0,sizeof(p));
        inp(n);
        ind(n);
        p[s]=-1;
        dis[s]=0;
        for(k=1; k<=n-1; k++)
        {
            for(u=0;u<n; u++)
            {
                for(j=0; j<ve[u].size(); j++)
                {

                    v = ve[u][j].first;
                    w = ve[u][j].second;
                    if(mp[node]!=v)
                    {
                        if(dis[u]+ w < dis[v])
                        {
                            dis[v]= dis[u]+w;
                            //cout<<u<<" "<<v<<" "<<w<<endl;
                            p[v]=u;
                        }
                    }
                }
            }
        }


        flag =false;

        for(u=0; u<n; u++)
        {
            for(j=0; j<ve[u].size(); j++)
            {
                v = ve[u][j].first;
                w = ve[u][j].second;

                if(dis[u]+ w <dis[v])
                {
                    flag =true;
                }
            }

        }

        if(!flag && maxa>dis[d]){
            maxa=dis[d];
            for(i=0;i<n;i++)
            {
                if(p[i]>=0)
                  sp[i] = p[i];
                else
                    sp[i]=-1;
            }
        }

    }


    if(maxa<100000)
    {
        cout<<"Cost of second shortest path : "<<dis[d];
        cout<<endl<<" second path : ";

        printpath(sp);
    }
    else
    {
        cout<<endl<<endl<<"there is no second shortest path"<<endl;
    }



    flag = bellman();

    if(flag)
    {
        cout<<endl<<endl<<"negative edge is detected"<<endl;
        cout<<"third shortest path has not in graph"<<endl;

        return 0;
    }

    return 0;
}
