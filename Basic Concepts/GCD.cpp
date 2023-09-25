#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num1, num2, i, gcd;


  //Storing user input into num1 and num2
  cin>>num1>>num2;

  for(i=1; i <= num1 && i <= num2; ++i)
  {
    // Checks if the current value of i is
    // factor of both the integers num1 & num2
    if(num1%i==0 && num2%i==0)
      gcd = i;
  }

  cout<<gcd;

  return 0;
}
