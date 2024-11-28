#include <stdio.h>
#include <math.h>
#include <conio.h>  
#include <stdlib.h> 

int main() {
    // 1 stands for stone
    // 2 stands for  scissors
    // 3 stands for paper
    int c,ansc;
    int h;
    start:
     printf("1. Stone\n"
     " 2. Scissors\n"
     " 3. Paper\n");
     printf("enter choice(1-3): ");
     scanf("%d", &h);
     if(h==1){
        printf("you choose stone\n");
     }
     else if(h==2){
        printf("you choose Scissors \n");
     }
     else if(h==3){
        printf("you choose Paper \n");
     }
     else{
        printf("wrong input\n");
        goto start;
     }
      
    c = (rand() % 100) + 1; // use rand() function to get the random number 
    printf("c : %d\n",&c);
     if(c<=33 && c>0){
        ansc = 1;
        printf("computer chooses stone\n");
     } 
     else if(c>33 && c<66){
        ansc = 3;
        printf("computer chooses paper\n");
     }
     else{
        ansc = 2;
        printf("computer chooses Scissors\n");
     }
     if(ansc == 1){
        if(h==2){
            printf("you loose");
        }
        else if(h==3){
            printf("you win");
        }
        else{
        printf("same choice");
        }
     }
     else if(ansc==2){
        if(h==1){
            printf("you win");
        }
        else if(h==3){
            printf("you loose");
        }
        else{
        printf("same choice");
        }
     }
     else {
        if(h==1){
            printf("you loose");
        }
        else if(h==2){
            printf("you win");
        }
        else{
        printf("same choice");
        }
     }

    }

     
 
