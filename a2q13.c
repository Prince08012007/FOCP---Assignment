#include <stdio.h>
#include <math.h>

int main() {
    // input of array
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("enter element: ");
        scanf("%d", &a[i]);
    }
    //printing initial array
    printf("the initial array is: ");
    for(int i=0;i<n;i++){
        printf("%d\n", a[i]);
    } 

    //rotating the array one time

    int temp = a[n-1];
    for(int i=(n-1); i>=1; i--){
        a[i] = a[i-1];
    }
    a[0] = temp;

    //printing new array
    printf("the new array after rotation is: ");
    for(int i=0;i<n;i++){
        printf("%d\n", a[i]);
    } 

}