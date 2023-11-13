#include <iostream>
#include <vector>

int findOdd(const std::vector<int>& arr)
{
    int result = 0;

    for (int num : arr)
    {
        result ^= num;
    }

    return result;
}

int main()
{

    std::vector<int> arr ;
    int val;
    char a;
    do
    {
        std::cin>>val;
        arr.push_back(val);
    }
    while ( a = getchar()!= '\n');

    std::cout << findOdd(arr) << std::endl;  // -1


    return 0;
}
