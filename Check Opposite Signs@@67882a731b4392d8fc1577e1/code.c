/*#include <stdio.h>

int main() {
    int num1, num2;


    // Input two numbers
    //printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the numbers have opposite signs
    if ((num1 < 0 && num2 >= 0) || (num1 >= 0 && num2 < 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Use bitwise XOR to check for opposite signs
    if ((num1 ^ num2) < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}