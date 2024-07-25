#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    (a>5) ? printf("Your number is less than 5") : printf("Your number is not less than 5");
    return 0;
}