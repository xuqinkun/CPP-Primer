#include <iostream>

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r1 = 3.1415;
    std::cout << i << " " << d << " " << r1 << " " << r2 << std::endl;
    r2 = r1;
    std::cout << i << " " << d << " " << r1 << " " << r2 << std::endl;
    i = r2;
    std::cout << i << " " << d << " " << r1 << " " << r2 << std::endl;
    r1 = d;
    std::cout << i << " " << d << " " << r1 << " " << r2 << std::endl;
    return 0;
}