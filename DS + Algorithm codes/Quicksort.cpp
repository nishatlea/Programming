#include<bits/stdc++.h>
using namespace std;

int part(int a[], int l, int h)
{
    int pivot = a[l];
    int i =l;
    int j = h+1;
    do
    {

    do
    {
        i++ ;
    }
    while(a[i]<pivot && i<=h);
    do
    {
        j--;
    }
    while(a[j]>pivot );
    if(i<j)
    {
        int temp;
        temp = a[j];
        a[j]= a[i];
        a[i]=temp;
    }
    }
    while(i<j);
    a[l]= a[j];
    a[j] = pivot ;
    return j;
}
void quicksort(int a[], int l, int h)
{
    int j;
    if(l<h)
    {
        j = part(a,l,h);
        quicksort(a,l,j-1);
        quicksort(a,j+1,h);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";


}
