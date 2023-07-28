#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nvalue = 5;
    int &renref = nvalue;
    renref = 6;
    cout<< renref <<endl;
    cout<< nvalue << endl;
}
