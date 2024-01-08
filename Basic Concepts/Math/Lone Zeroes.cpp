
#include <iostream>

int countLoneZeroes(int number) {
    int count = 0;
    bool prevIsZero = false;
    int i=0,j=0;

    while (number > 0) {
        int digit = number % 10;

        if (digit == 0) {
            if (!prevIsZero) {
                int nextZero = number/10;
                nextZero = nextZero%10;
                if(nextZero != 0)
                    count++;
            }
            prevIsZero = true;
        }
           else {
            prevIsZero = false;
        }

        prevIsZero = (digit == 0);
        number /= 10;
    }

    return count;
}

int main() {
    int num;
    std::cin>>num;
    int result = countLoneZeroes(num);
    std::cout << result << std::endl;

    return 0;
}
