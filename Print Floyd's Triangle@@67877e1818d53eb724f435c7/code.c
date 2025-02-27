#include <stdio.h>

void print_floyds_triangle(int N) {
    int num = 1; // Initialize the number counter
    
    for (int i = 1; i <= N; i++) {  // Loop for each row
        for (int j = 1; j <= i; j++) {  // Loop for each column
            printf("%d ", num);  // Print the number
            num++;  // Increment the number
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
    print_floyds_triangle(N);

    return 0;
}
