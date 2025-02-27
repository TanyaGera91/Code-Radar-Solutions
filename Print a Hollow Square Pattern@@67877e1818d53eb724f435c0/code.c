#include <stdio.h>

void print_hollow_square(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        for (int j = 1; j <= N; j++) {  // Loop for each column
            // Print '*' for the first & last row, and first & last column
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");  // Print space inside the square
            }
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    
    // Take input from user
  //  printf("Enter the size of the square: ");
    scanf("%d", &N);

    // Function call
    print_hollow_square(N);

    return 0;
}
