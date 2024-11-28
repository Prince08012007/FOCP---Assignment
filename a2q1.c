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
        {
        scanf("%d",&a[i]);
        
        }
    }

    //increasing every array element by 5
    for(int i=0;i<n;i++){
        a[i]= a[i] +5;
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}