#include<stdio.h>
int sum(int n);
int main()
{
    int a;
    printf("Enter the number of natural numbers you want sum of\n");
    scanf("%d",&a);
    printf("The sum of first %d natural numbers is %d\n",a,sum(a));
    return 0;
}
int sum(int n){
    if(n==2){
        return 3;
    }
    else{
        return n+sum(n-1);
    }
}