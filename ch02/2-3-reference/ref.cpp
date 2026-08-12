#include <iostream>

int main() {
    int i = 1024, j = 2048;
    int &r = i;
    int &r2 = r;
    int &k = j;
    // std::cout << i << " " << j << " " << r << " " << k << " " << r2 << std::endl;
    printf("&i=%p &r=%p &r2=%p\n", &i, &r, &r2);
    printf("&j=%p &k=%p\n", &j, &k);
    return 0;
}