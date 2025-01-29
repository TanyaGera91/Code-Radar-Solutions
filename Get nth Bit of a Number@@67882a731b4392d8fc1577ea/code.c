#include <stdio.h>

int main() {
    int num, bit_no;
    scanf("%d", &num);

    // Find the total number of bits in an integer
    bit_no = sizeof(int) * 8;  // Assuming 32-bit integer, bits = 32

    // Create a mask for the MSB by shifting 1 to the left (bits - 1) positions
    int mask = 1 << (bit_no - 1);

    // Check if MSB is set using bitwise AND
    if (num & mask) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}