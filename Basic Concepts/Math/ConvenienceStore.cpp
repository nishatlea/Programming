
#include <iostream>

bool changeEnough(int change[], double amountDue) {
    // Define the values of each coin.
    double quarters = 0.25;
    double dimes = 0.10;
    double nickels = 0.05;
    double pennies = 0.01;

    // Calculate the total value of the change.
    double totalChange = change[0] * quarters + change[1] * dimes + change[2] * nickels + change[3] * pennies;

    // Check if the total change is enough to cover the amount due.
    return totalChange >= amountDue;
}

int main() {
    // Test cases
    int change[4] ;

    double amountDue;

    for(int i=0;i<4;i++)
        std::cin>>change[i];

    std::cin>>amountDue;


    if(changeEnough(change, amountDue))
        std::cout<<"true"<<std::endl;
    else
        std::cout<<"false"<<std::endl;



    return 0;
}
