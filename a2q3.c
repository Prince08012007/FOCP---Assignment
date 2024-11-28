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
        if(a[i]==99){
            int x = i+1;
            printf("student to score 99 marks is: ");
            printf("%d", x);
            break;

        }
        else{
            continue;
        }
    }
}