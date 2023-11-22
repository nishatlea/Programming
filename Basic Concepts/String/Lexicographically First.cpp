#include<bits/stdc++.h>
using namespace std;

string findLexicographicallyFirst(const string& input) {
    string first = input;
    sort(first.begin(), first.end());

    return first;
}

int main() {
   string inputString;
    cin>>inputString;

     string first = findLexicographicallyFirst(inputString);
     cout<<first<<endl;


    return 0;
}
