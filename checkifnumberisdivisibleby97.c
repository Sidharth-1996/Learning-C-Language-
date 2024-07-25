#include<stdio.h>
int main()
{
    int a,d;
    printf("Check whether the number is divisible by 97\n");
    printf("Enter the number you want to check\n");
    scanf("%d",&a);
    d=a%97;
    printf("Divisibility test returns : %d\n",d);

    return 0;
}