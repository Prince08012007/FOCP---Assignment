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
        if(a[i]%2==0){
            printf("even score ");
        }
        else{
            printf("odd score");
        }
    }

}
 