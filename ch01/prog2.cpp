#include <iostream>

int main()
{
    int sum, value;
    std::cout << "Enter your numbers" << std::endl;
    while (std::cin >> value) {
        std::cout << "You entered: " << value << std::endl;
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}