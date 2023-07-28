#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        int n,l,h;
        cin>>n>>l>>h;
        double p[n],avg=0;
        memset(p,0,sizeof(p));
        int j;
        for(j=0;j<n;j++)
        {
            cin>>p[j];
             avg+=p[j];
        }
        double x= double(n);
        avg=avg/x;
        cout<<"Case "<<i<<":"<<endl;
        vector<double>vec;
        for(j=0;j<n;j++)
        {
        double da,dl,dh,db;
        da=abs(p[j]-avg);
        dl=abs(p[j]-l);
        dh=abs(p[j]-h);
        db=min(dl,dh);
        if(db<da)
            vec.push_back(p[j]);
        }
if(vec.size()>0)
{
    for(j=0;j<vec.size();j++)
        cout<<fixed<<setprecision(2)<<vec[j]<<endl;
}
        else
            cout<<"No outliers"<<endl;

    }

}
