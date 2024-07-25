#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Check the greatest number among the four numbers you have entered\n");
    printf("Enter the first number :\n");
    scanf("%d",&a);
    printf("Enter the first number :\n");
    scanf("%d",&b);
    printf("Enter the first number :\n");
    scanf("%d",&c);
    printf("Enter the first number :\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greatest among four number is %d\n",a);
    }
    if(b>a && b>c && b>d){
        printf("The greatest among four number is %d\n",b);
    }
    if(c>a && c>b && c>d){
        printf("The greatest among four number is %d\n",c);
    }
    if(d>a && d>b && d>c){
        printf("The greatest among four number is %d\n",d);
    }
    return 0;
}