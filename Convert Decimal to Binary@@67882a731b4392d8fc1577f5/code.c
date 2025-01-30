#include <stdio.h>

void decimalToBinary(unsigned int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Assuming a 32-bit integer
    int i = 0;
    
    while (n > 0) {
        binary[i++] = n % 2; // Store remainder (0 or 1)
        n /= 2; // Divide number by 2
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    unsigned int num;
    //printf("Enter a decimal number: ");
    scanf("%u", &num);
    
    //printf("Binary representation: ");
    decimalToBinary(num);
    
    printf("\n");
    return 0;
}