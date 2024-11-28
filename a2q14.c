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

    //printing duplicates

    
    for(int i =0; i<n; i++){
        int count = 0;
        for(int j =0; j<n; j++){
            if(a[i] == a[j]){
                count = count+1;
            }
        }
        if(count>2){
            printf("%d", a[i]);
        }
    
    }

}