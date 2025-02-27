// Your code here...
#include <stdio.h>

void print_numeric_triangle(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        for (int j = 1; j <= i; j++) {  // Loop to print numbers
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    
    // Take input from user
   // printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Function call
    print_numeric_triangle(N);

    return 0;
}
