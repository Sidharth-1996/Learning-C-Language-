#include<stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial(int x){
    printf("calling factorial of %d\n",x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}