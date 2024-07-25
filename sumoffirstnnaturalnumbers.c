#include<stdio.h>
int sum(int b);
int main()
{
    int a;
    printf("Enter the number of natural numbers you want sum of\n");
    scanf("%d",&a);
    printf("The sum of %d natural number is %d",a,sum(a));
    return 0;
}

int sum(int b){
    if (b==0){
        return 0;
    }
    else{
        return b + sum(b-1);
    }
}