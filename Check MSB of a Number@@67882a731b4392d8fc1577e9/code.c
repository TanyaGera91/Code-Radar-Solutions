#include <stdio.h>

int main() {
    int num, bits;
    scanf("%d", &num);

    // Find the total number of bits in an integer
    bits = sizeof(int) * 8;  // Assuming 32-bit integer, bits = 32

    // Create a mask for the MSB by shifting 1 to the left (bits - 1) positions
    int mask = 1 << (bits - 1);
     //Important Point  1000 0000 0000 1 is shifted 31 times to the left
    // Check if MSB is set using bitwise AND
    if (num & mask) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}