#include<stdio.h>
int main()
{
    int n,i,product=1;
    printf("Enter the number you want to find factorial of :\n");
    scanf("%d",&n);
    for(i=n;i;i--){
        product*=i;
    }
    printf("The factorial of %d is %d\n",n,product);
    return 0;
}