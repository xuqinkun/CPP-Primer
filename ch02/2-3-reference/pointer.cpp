#include <iostream>

int main() {
    double dval;
    double *pd = &dval;
    double *pd2 = pd;

    // int *pi = pd; //cannot convert ‘double*’ to ‘int*’ in initialization
    // int *pi = &dval; //cannot convert ‘double*’ to ‘int*’ in initialization
    std::cout << "pd = " << pd << std::endl;
    std::cout << "pd2 = " << pd2 << std::endl;

    int *p;
    std::cout << "p = " << p << " *p = " << *p << std::endl;
    p = nullptr;
    std::cout << "p = " << p << "*p = " << *p << std::endl;
    return 0;
}