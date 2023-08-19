
#include <iostream>
#include <string>

using namespace std;

bool canBeSubsequence(string str1, string str2) {
     int n = str1.size();
    int m = str2.size();

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (((str2[j]-'a') == (str1[i]-'a')  + 1) || str1[i] == str2[j] ){
            j++;
        }
        else if ((str1[i]=='z' && str2[j]=='a'))
        { j++; }
        i++;
    }

    return j == m;
}

int main() {
    string str1 = "abc";
    string str2 = "ad";

    bool result = canBeSubsequence(str1, str2);

    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
