#include <stdio.h>
/*This is my first c program */
int main()
{
    printf("hello,this is my first c program \n");
    int tom;
    int Tom;
    //declaring variable to store error codes
    int error_code;
    int a = 4;
    int j = 23 + 56;
    //int b=8.7; ---> not recomended  bcoz it's not an integer
    float b = 8.8;
    char c = 'u';
    char e = 'v rays';
    printf("the value of c is %c \n", c);
    printf("the value of e is %c \n", e);
    printf("the value of a is %d \n", a);
    printf("the value of b is %f \n", b);
    printf("the sum of c and e is %c \n", c + e);
    printf("the value of j is %d \n", j);
    int d = 9;
    printf("the value of d is %d \n", d);
    printf("the sum of a and d is %d \n", a + d);
printf("the subtraction of a and d is %d \n", a - d);

    //'a'  ---> A Character
    printf("My first program is awesome");
    return 0;
}