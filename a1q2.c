#include<stdio.h>
#include<math.h>
// using namespace std;
//hcf of two integers
int a,b;
int hcf(int x, int y);
//function to calculate hcf
int main(void) {
    scanf("%d", &a);
    scanf("%d", &b);
    int l = hcf(a,b);
    printf("hcf is ");
    printf("%d\n", l);
    return 0;
}
int hcf(int x, int y){
    int ans;
    if(a>=b){
        for(int i=b; i>=1;i--){
            if(a%i==0 && b%i ==0 ){
                //printf("hcf is: \n");
                ans = i;
                break;
            }
        }
    }
    else{
        for(int j=a; j>=1; j--){
            if(a%j==0 && b%j ==0 ){
                //printf("hcf is: \n");
                ans = j;
                break;
            }
        }
  }
  return ans;
}
