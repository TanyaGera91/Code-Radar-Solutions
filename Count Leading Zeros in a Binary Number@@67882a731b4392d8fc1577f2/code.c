#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    if (n == 0) return 32; // For a 32-bit integer, all bits are zero

    int count = 0;
    unsigned int mask = 1 << 31; // Start with the highest bit

    while ((n & mask) == 0) {
        count++;
        mask >>= 1;
    }
    
    return count;
}

int main() {
    unsigned int n;
    scanf("%d",&n) ;// Example number
    printf("%d", countLeadingZeros(n));
    return 0;
}