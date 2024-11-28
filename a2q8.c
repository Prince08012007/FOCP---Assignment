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

    int max = a[0];
    int min = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=max){
            max = a[i];
        }
        else if(a[i]<=min){
            min = a[i];
        }
        else{
            continue;
        }
        
    }
    printf("max element of array is ");
    printf("%d\n", max);
    printf("min element of array is ");
    printf("%d", min);

}