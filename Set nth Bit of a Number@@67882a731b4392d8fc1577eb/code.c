#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);
    
    num = num | (1 << n);  // Set the nth bit using bitwise OR
    
    printf("%u",num);
    
    return 0;
}
