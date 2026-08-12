#include <iostream>

int reused = 42;
int main() {
    int unique = 0;
    // 输出#1：输出全局变量和局部变量
    std::cout << reused << " " << unique << std::endl;

    // 输出#2：输出全局变量和局部变量
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;
    // 输出#3：显示输出全局变量
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}