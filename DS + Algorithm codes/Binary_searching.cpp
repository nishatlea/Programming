#include<bits/stdc++.h>
using namespace std;

int b_search(int h, int l, int x, int arr[])
{
    int mid;
    while(l<=h)
        {mid = (l+h)/2;
    if(arr[mid]==x)
      return mid;
    else if( arr[mid]>= x)
    {
        h= mid -1;
        b_search(h,l,x,arr);
    }
    else
    {
        l = mid +1;
        b_search(h,l,x,arr);
    }
        }
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result ;
    result = b_search(4,0,10,arr);
    cout<<result<<endl;

}
