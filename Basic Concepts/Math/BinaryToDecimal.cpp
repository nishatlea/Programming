#include <stdio.h>
#include <math.h>
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main()
{
    long binarynum;
    scanf("%ld", &binarynum);

    printf("%d", binaryToDecimal(binarynum));
    return 0;
}
