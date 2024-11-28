#include<stdio.h>
#include<math.h>

int main() {
    // Write C code here
    //101 TRIANGLE
    int n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            if(((i+j)%2)==0){
                printf("%d", 1);
            }
               
            else{
                printf("%d", 0);
            }
                
        }
        printf("\n");
    }
    return 0;
}
    
