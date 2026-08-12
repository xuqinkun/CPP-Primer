#include <iostream>

constexpr int size() { return 10; }

int main() {
    constexpr int mf = 20;
    constexpr int limit = mf + 1;
    constexpr int sz = size();
    printf("mf=%d limit=%d sz=%d\n", mf, limit, sz);
    return 0;
}