#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}


int main() {
    while(1) {
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double distance = calculateDistance(x1, y1, x2, y2);
    double truncatedValue = static_cast<int>(distance * 100) / 100.0;
    cout <<"Distance: " << fixed << setprecision(2) << distance <<endl;
    cout<< "After trunk:  " << truncatedValue << endl;
    printf("%.2f", distance);

    }
}
