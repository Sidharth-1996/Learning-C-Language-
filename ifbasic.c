#include<stdio.h>
int main()
{
    int a;
    printf("Check whether the number is even or odd\n");
    printf("Enter the number you want to check\n");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("%d is even\n",a);
    }
    else{
        printf("%d is odd",a);
    }
    return 0;
}