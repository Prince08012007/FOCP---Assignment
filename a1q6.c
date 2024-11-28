#include<stdio.h>
#include<math.h>

//to tell quadrant of a given coordinate

int main(){
    int x,y;
    printf("enter x cordinate: ");
    scanf("%d", &x);
    printf("enter y cordinate: ");
    scanf("%d", &y);
    //1st quad (+,+) 2nd quad(-,+) 3rd quad(-,-) 4th quad(+,-)
    if(x>0 && y>0){
        printf("1st quadrant");
    }
    else if(x<0 && y>0){
        printf("2nd quadrant");
    }
    else if(x<0 && y<0){
        printf("3rd quadrant");
    }
    else if(x>0 && y<0){
        printf("4th quadrant");
    }
    else{
        printf("origin");
    }

    return 0;

}