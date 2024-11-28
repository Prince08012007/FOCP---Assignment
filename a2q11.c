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
    //printing array
    for(int i=0;i<n;i++){
        printf("%d\n", a[i]);
    } 
    //input new element n index
    int ew,pos;
    printf("enter new elemnt: ");
    scanf("%d", &ew);
    printf("enter index of new element: ");
    scanf("%d", &pos);
    
    //inserting new element at index
    
    if(n==pos){
        a[pos] = ew;
    }
    else{
        for(int i=n; i>=pos;i--){
        a[i] = a[i-1];
        }
    }
    a[pos] = ew;
    
    //printing new array
    for(int i=0;i<(n+1);i++){
        printf("%d\n", a[i]);
    }
return 0;
}
