
#include <iostream>
#include <vector>

int countTrue(const std::vector<bool>& arr) {
    int count = 0;
    for (const bool& value : arr) {
        if (value) {
            count++;
        }
    }
    return count;
}

int main() {
    int length;
    std::vector<bool> arr(length) ;
    bool a;
    std::cin>>length;
    for(int i=0; i<length; i++)
        {
            std::cin>>a;
            arr.push_back(a);
        }


    int result = countTrue(arr); // Should return 2

    std::cout << result << std::endl;


    return 0;
}
