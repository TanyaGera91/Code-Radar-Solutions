#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);
    
    num = num | (1 << n);  // Set the nth bit using bitwise OR
    
    printf("Number after setting bit %u: %u\n", n, num);
    
    return 0;
}
