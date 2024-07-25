#include<stdio.h>
int main()
{
    int a=5;
    printf("The value of a++ is %d\n",a++);//it first print the value of a and then increment it by 1
    printf("The value of a++ is %d\n",++a);//it first increment the value of a and then print it
    // printf("%d",a);
    a+=10;
    printf("%d",a);
    return 0;
}