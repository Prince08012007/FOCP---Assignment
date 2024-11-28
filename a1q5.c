#include<stdio.h>
#include<math.h>

// code for perfect number 

int main(){
    int a;
    printf("enter no.: ");
    scanf("%d", &a);
    int sum = 0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum = sum+i;
        }
        else{
            continue;
        }
    }
    if(sum==a){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }

}
