#include<stdio.h>
int main()
{
    int a=5;
    int b=9;
    int *c=&a;
    int *g=&a;
    int *d=&b;
    printf("The value of c is %u\n",c);
    printf("The value of g is %u\n",g);
    c++;
    printf("The value of c is %u\n",c);
    c--;
    printf("The value of c is %u\n",c);

    printf("The value of d is %u\n",d);

    int f=c-d;
    printf("the value of f is %d",f);
    return 0;

}