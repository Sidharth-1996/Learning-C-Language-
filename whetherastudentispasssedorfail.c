#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your Math's marks\n");
    scanf("%d",&a);
    if(a>=33){
        printf("You are passed in Maths\n");
    }
      else{
        printf("You are failed in Maths\n");
    }
    printf("Enter your Science's marks\n");
    scanf("%d",&b);
    if(b>=33){
        printf("You are passed in Science\n");
    }
    else{
        printf("You are failed in Science\n");
    }
    printf("Enter your English's marks\n");
    scanf("%d",&c);
    if(c>=33){
        printf("You are passed in English\n");
    }
      else{
        printf("You are failed in English\n");
    }
    if(a+b+c>=120 && a>=33 && b>=33 && c>=33){
        printf("overall : You are passed\n");
    }
    else{
        printf("Overall : You are failed\n");
    }
    return 0;
}