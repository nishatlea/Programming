#include<bits/stdc++.h>
using namespace std;

string findLexicographicallyLast(const string& input) {

   string last = input;
  sort(last.begin(), last.end(), greater<char>());

    return last;
}

int main() {
    string inputString;
    cin>>inputString;

     string first = findLexicographicallyLast(inputString);
     cout<<first<<endl;


    return 0;
}

