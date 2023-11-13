
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

float calculateDiscountedPrice(int originalPrice, int discountPercentage) {
    float discount = static_cast<float>(discountPercentage) / 100; // Convert discount percentage to a decimal
    float finalPrice = originalPrice * (1 - discount);
    return finalPrice;
}

int main() {
    int originalPrice, discountPercentage;
    cin>>originalPrice>>discountPercentage;
    float finalPrice = calculateDiscountedPrice(originalPrice, discountPercentage);
    std::cout << "Price: "<<fixed<<setprecision(2)<<finalPrice << std::endl;

    return 0;
}
