#include<stdio.h>
int main()
{
    int a=5;
    int *b;
    b=&a;
    int **c=&b;
    printf("The value of a is %d\n",*b);
    printf("The address of a is %u\n",b);
    printf("The value of a is %d\n",*b);
    printf("The address of b is %u\n",c); // printf("The address of b is %u\n",**c); 
    return 0;                             //if i use the above line of code then it will go
                                          //for b and b contains address of a so ,the value of b is also 5.
                                          /* b'coz it contains the adress of a only 
                                          so it's value will also become 5*/  
}