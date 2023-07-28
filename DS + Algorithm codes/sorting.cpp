#include<bits/stdc++.h>
using namespace std;

int main()
{
//insertion sort
/*int i, n, x , j;
cin>>n;
int num[n];
for(i=1;i<=n;i++)
{
    cin>>num[i];
    x= num[i];
    j = i-1;
    while (j>=1 && num[j]>x)
    {
        num[j+1] = num[j];
        j--;
    }
    num[j+1] = x;
}

for(i=1;i<n;i++)
{
    cout<<num[i]<<endl;
}
*/
//Selection Sort
for(i=1;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(num[i] > num [j])
            swap(num[i],num[j])
    }
}
}
