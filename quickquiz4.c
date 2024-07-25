#include<stdio.h>
int main()
{
     int n;
    printf("Enter the number of natural numbers you want to print\n");
    scanf("%d",&n);
    int i=n;
    for(i=n;i;i--){
        printf("%d\n",i);
    }
    return 0;
}