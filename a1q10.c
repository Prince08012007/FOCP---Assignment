#include <stdio.h>
#include <math.h>

//factorial

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact*i;
    }
    return fact;
}

// function to calculate nCr

int ncr(int n, int r) {
    return (factorial(n) / (factorial(r)*factorial(n - r)));
}

int main() {
    int rows;

    // input number of rows 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // print spaces 
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // print Pascal triangle elements
        for (int k = 0; k <= i; k++) {
            printf("%d ", ncr(i, k));
        }

        printf("\n");
    }

    return 0;
}