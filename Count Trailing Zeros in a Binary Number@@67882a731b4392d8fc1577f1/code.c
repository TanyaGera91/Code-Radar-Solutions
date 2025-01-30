#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    if (n == 0) return 32; // All bits are zero in a 32-bit integer

    int count = 0;
    while ((n & 1) == 0) { // Check least significant bit
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int n;
    scanf("%d",&n);
    printf("%d\n", countTrailingZeros(n));
    return 0;
}