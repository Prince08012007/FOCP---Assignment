#include<stdio.h>
int main(){
    int e,f;
    scanf("%d %d",&e,&f);
    int a=e;int b=f;
    int c,d;
    c=a;
    d=b;
    printf("%d %d\n",d ,c);
    int g;
    g=a+b;
    a=g-a;
    b=g-b;
    printf("%d %d\n",a,b);
    a=e;b=f;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
     a=e;b=f;
    printf("%d %d\n",b,a);
}