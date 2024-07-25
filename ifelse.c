#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a>=18 && a<=90){
        printf("You are above 18 and below 91.\nHence,you can drive\n");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}