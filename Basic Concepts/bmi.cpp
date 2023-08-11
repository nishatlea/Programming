
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateBMI(double weight, double height) {
    return weight / pow(height, 2);
}

int main() {

    while(1)
    {

        double weight, height;

        cin >> height;
        cin >> weight;

        double bmi = calculateBMI(weight, height);

        cout << fixed << setprecision(2);
        cout << "BMI: " << bmi << endl;
        if (bmi < 18.5) {
            cout << "Underweight" << endl;
        } else if (bmi >= 18.5 && bmi < 25.0) {
            cout << "Normal weight" << endl;
        } else if (bmi >= 25.0 && bmi < 30.0) {
            cout << "Overweight" << endl;
        } else {
            cout << "Obese" << endl;
        }


}
}
