#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    printf("Sum of the two numbers\n");
    printf("Enter the numbers\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    c=sum(a,b);
    printf("The sum of the two numbers is %d",c);
    return 0;
}

int sum(int a,int b){
    int r;
    r=a+b;
    return r;
}