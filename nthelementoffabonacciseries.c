#include<stdio.h> // wrong do it again
int fabonacci(int n);
int main()
{
    int a;
    printf("Enter the term you want to find\n");
    scanf("%d",&a);
    printf("The %d element of the fabonacci series is %d",a,fabonacci(a));
    return 0;
}

int fabonacci(int n)
{
    if(n==1){
        return 0;
    }
    else if{
        return fabonacci(n-1)+fabonacci(n-2); 
    }
}