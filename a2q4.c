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
        if(a[i]==99){
            count = count +1;
        }
        else{
            continue;
        }
   }

   printf("%d ", count);
   printf("students have scored 99 marks");

}
