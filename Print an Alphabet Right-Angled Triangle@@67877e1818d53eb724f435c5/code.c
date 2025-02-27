#include <stdio.h>

void print_alphabet_triangle(int N) {
    for (int i = 1; i <= N; i++) {  // Loop for each row
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Loop to print letters from 'A'
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    
    // Take input from user
    //printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Function call
    print_alphabet_triangle(N);

    return 0;
}
