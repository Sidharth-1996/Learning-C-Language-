#include<stdio.h>
int main()
{
    int a=5;
    int *b;
    b=&a;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*b);
    printf("The value of a is %d\n",*(&a));
    printf("The address of a is %u\n",b);
    printf("The addres of b is %u\n",&b);
    // printf("The value of b is %d\n",*(&b)); value of pointer cannot be determined
    // printf("The value of b is %d\n",b);
    return 0;
}