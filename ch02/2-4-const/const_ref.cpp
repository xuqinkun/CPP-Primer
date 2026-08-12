#include <iostream>

int main() {
    double dval = 3.14;
    const int &ri = dval;
    printf("dval=%p \nri=%p\n", &dval, &ri);
    std::cout << "dval=" << dval << "  ri=" << ri << std::endl;
    return 0;
}