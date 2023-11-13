#include<bits/stdc++.h>
using namespace std;

int find_factorial(int);
int main()
{
   int num, fact;
   cin>>num;

   fact =find_factorial(num);

   cout<<fact;

}
int find_factorial(int n)
{
   if(n==0)
      return(1);

   return(n*find_factorial(n-1));
}
