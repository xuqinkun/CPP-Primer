#include <iostream>

int main() {
    int i1 = 1;
    int i2 = {2};
    int i3{3};
    int i4(4);
    long double ld = 3.1415;
    int a{ld}, b = {ld};
    int c(ld), d = ld;
    printf("i1 = %d, i2 = %d, i3 = %d, i4 = %d\n", i1, i2, i3, i4);
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("ld = %Lf\n", ld);

    // int f = {3.14};
    return 0;
}