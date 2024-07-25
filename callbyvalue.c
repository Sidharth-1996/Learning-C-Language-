#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a=2,b=4;
    printf("Sum of a and b is %d\n",sum(a,b));
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=10;
    b=5;
/* c=a+b; if i will write this after writing the values of local variable a and b 
then it will run for local variables*/
    return c;
}