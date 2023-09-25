#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num,rem,reverseNum=0;
  cin>>num;

  while(num>0)
  {
    rem = num%10;
    reverseNum = reverseNum*10 + rem;
    num = num/10;
  }

  cout<<reverseNum;


}
