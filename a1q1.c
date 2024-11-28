#include<stdio.h>
#include<math.h>
// using namespace std;
//check wether a number is armstrong or not
int main(){
    int n,r,x,y;
    printf("enter a number: ");
    scanf("%d", &n);
    x = n;
    y = n;
    int sum = 0;
    int count = 0;
    while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
        printf("count: %d\n",count);

    while (x!=0){
        r = (x%10);
        printf("r: %d\n",r);
        int powAns = round(pow(r,count));
        sum= (sum + powAns) ;
        x = x/10;

    }
    if(sum==y){
        printf("number is armstrong");
     }
    else{
        printf("number is not armstrong");
     }


return 0;
}