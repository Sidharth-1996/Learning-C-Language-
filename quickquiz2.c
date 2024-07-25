#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the number of natural numbers you want to print\n");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}