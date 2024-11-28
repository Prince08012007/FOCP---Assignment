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
    //element at position to be deleted
    int pos;
    printf("enter index of element to be deleted: ");
    scanf("%d", &pos);
     if (pos >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (int i = pos - 1; i < n -1; i++)  
        {  
            a[i] = a[i+1];  
        }  
    }

    //printing new array

    for(int i=0;i<(n-1);i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}