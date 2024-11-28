#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("1. Addition\n"
    "2. Subtraction\n"
    "3. Multiplication\n"
    "4. Division\n"
    "5. Logarithmic values\n"
    "6. Square roots\n" );
    printf("choose the operation that you want to perform(1-6): ");
    scanf("%d", &n);
    int a,b;
    double x,y;
    int c;
    switch(n){
        case 1: 
        printf("enter two numbers: ");
        scanf("%d %d", &a, &b);
        c = a+b;
        printf("the sum is: ");
        printf("%d", c);
        break;

        case 2: 
        printf("enter two numbers: ");
        scanf("%d %d", &a, &b);
        c = a-b;
        printf("the subtraction answer is: ");
        printf("%d", c);
        break;

        case 3: 
        printf("enter two numbers: ");
        scanf("%d %d", &a, &b);
        c = a*b;
        printf("the product is: ");
        printf("%d", c);
        break;

        case 4: 
        printf("enter two numbers: ");
        scanf("%d %d", &a, &b);
        c = (a/b);
        printf("the divided ans is: ");
        printf("%d", c);
        break;

        case 5: 
        printf("enter a number: ");
        scanf("%lf", &x);
        y = log(x);
        printf("the Logarithmic value is: ");
        printf("%lf", y);
        break;

        case 6: 
        printf("enter a number: ");
        scanf("%lf", &x);
        y = sqrt(x);
        printf("the square root value is: ");
        printf("%lf", y);
        break;

        default: printf("wrong input");
        break;

    }


}