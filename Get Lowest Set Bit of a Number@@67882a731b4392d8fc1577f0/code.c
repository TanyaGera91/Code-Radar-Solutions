#include <stdio.h>

int main() {
    int num, pos = 0;

    // Input number
    
    scanf("%d", &num);

    // If number is 0, no set bit exists
    if (num == 0) {
        printf("No set bit found.\n");
        return 0;
    }

    // Find position of lowest set bit
    while ((num & 1) == 0) {
        num = num >> 1;  // Right shift to check the next bit
        pos++;           // Increase position
    }

    // Print the position of the lowest set bit
    printf("The lowest set bit is at position: %d\n", pos);

    return 0;
}