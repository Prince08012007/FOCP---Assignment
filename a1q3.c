#include<stdio.h>
#include<math.h>
//subtraction using bitwise operators
int a,b;
int bitsubtract(int x, int y);
//function to calculate hcf
int main(void) {
    printf("enter no1: ");
    scanf("%d", &a);
    printf("enter no2: ");
    scanf("%d", &b);
    int l = bitsubtract(a,b);
    printf("subtracted answer is ");
    printf("%d\n", l);
    return 0;
}

int bitsubtract(int x, int y){
    while (y != 0)
    {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}
