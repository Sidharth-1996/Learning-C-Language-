#include<stdio.h>
#include<math.h>
int tentime(int *a);
int main()
{
    int a = 5;
    printf("Value of a variable after increasing it's value by ten times is %d\n",tentime(&a));
    return 0;
}

int tentime(int *a){
    int c;
    c=pow(*a,10);
    return c;
}