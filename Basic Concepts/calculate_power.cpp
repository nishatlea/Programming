#include <bits/stdc++.h>
using namespace std;

int main() {
  int number, exp;
  long double result = 1.0;
  cin>>number>>exp;

  //storing the exponent value in a temporary variable
  //to perform some arithmetic operations on it.
  int temp = exp;
  //Multiplying the number by itself, until the "temp"
  //that contains "exp" value become zero.
  while (temp != 0) {
    result *= number;
    --temp;
  }
  printf("%.0Lf",result);

  return 0;
}
