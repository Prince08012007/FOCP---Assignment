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
    int count =0;

    for(int i=0;i<n;i++){
        int p = 0;
        for(int j =2;j<a[i];j++){
            if(a[i]%j==0){
                p=1;
            }
            else{
                continue;
            }

        }
        if(p==0){
            count = count+1;
        }

    }
    printf("number of prime numbers in array is ");
    printf("%d", count);
}