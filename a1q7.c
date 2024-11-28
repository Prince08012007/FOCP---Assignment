#include <stdio.h>
#include <math.h>

// functions 

int decimalToBinary(int x);
int binaryToDecimal(int x);

int main() {
    int x, n;
    printf("Enter number: ");
    scanf("%d", &x);

    printf("Choose option 1 for decimal to binary or option 2 for binary to decimal: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Binary: %d\n", decimalToBinary(x));
            break;
        case 2:
            printf("Decimal: %d\n", binaryToDecimal(x));
            break;
        default:
            printf("Wrong input!\n");
            break;
    }
    return 0;
}

// Function to convert decimal to binary
int decimalToBinary(int x) {
    int rev = 0;
    int p = 1;
    while (x > 0) {
        int rem = x % 2;
        rev += rem * p;
        x /= 2;
        p *= 10;
    }
    return rev;
}

// Function to convert binary to decimal

int binaryToDecimal(int x) {
    int ans = 0, i = 0;
    while (x > 0) {
        int r = x % 10;
        ans += r * (int)pow(2, i);
        x /= 10;
        i++;
    }
    return ans;
}
