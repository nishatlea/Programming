#include <bits/stdc++.h>
using namespace std;

int main()
{
   int num, reverse_num=0, remainder,temp;
   cin>>num;

   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   }

   if(reverse_num==num)
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
