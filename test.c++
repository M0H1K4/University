#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> numbers={2, 5, 34, 14, 4};
    std::sort(numbers.begin().numbers.end())

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}