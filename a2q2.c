#include <stdio.h>
#include <math.h>

int main() {
// array insert
    int n,x;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int a[n],f;
    // arrays 
    for(int i=0;i<n;i++){
        printf("enter element: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>=75){
            printf("A");
        }
        else if(a[i]>=60 && a[i]<=74){
            printf("B");
        }
        else if(a[i]<=59 && a[i]>=40){
            printf("C");
        }
        else if(a[i]<40){
            printf("D");
        }
        else{
            printf("invalid marks!");
        }

    }
    return 0;


}