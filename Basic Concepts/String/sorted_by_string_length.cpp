#include<bits/stdc++.h>
using namespace std;

vector<string> sortStringsByLength(const vector<string>& input) {
    vector<string> sortedStrings = input;


    sort(sortedStrings.begin(), sortedStrings.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });

    return sortedStrings;
}

int main() {
     int length, i;
     cin>>length;

    vector<string> inputStrings(length);

    for(i=0;i<length;i++)
    cin>>inputStrings[i];

    vector<string> sortedStrings = sortStringsByLength(inputStrings);

    for (const string& str : sortedStrings) {
        cout << str <<" ";
    }
    cout<<endl;

    return 0;
}
