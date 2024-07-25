#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year you want to check whether it is a leap year or not\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("The year you entered is a leap year\n");
    }
    else{
        printf("The year you entered is not a leap year\n");
    }
    return 0;
}