#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    a=50;
    b=10;
    int z=b*a;//legal
    //b*a=z;//illegal
    printf("The value of a + b is %d\n",a+b);
    printf("The value of a - b is %d\n",a-b);
    printf("The value of a * b is %d\n",a*b);
    printf("The value of a / b is %d\n",a/b);
    printf("The value of z is %d\n",z);
    printf("******************************************************************************************************************\n");
    printf("5 when divided by 2 ,the remainder is %d\n",5%2);//modulus gives the remainder
    printf("5 when divided by 2 ,the remainder is %d\n",-5%2);//always numerator ka sign hi assign hota h
    printf("5 when divided by 2 ,the remainder is %d\n",5%-2);
    //printf("5 when divided by 2 ,the remainder is %d\n",(5)(2)); it will throw an eroor b'coz no operator is assumed by c language
    printf("%d\n",(5)*(2));
    //there is no operator to perform exponentiation in c language
    printf("The value of 2^4 is %d\n",2^4);//wrong ,it's a logical operator and doesn't give the exponential value (will n ot produce 2 to the power 4 )it's a bitwise xor operator
    printf("The value of 2 to the power 4 is %f\n",pow(2,4)); // pow() ke sath %f use hota h(always returns a double )  
    printf("The value of 5+6.1 is %f\n",5+6.1);
    printf("The value of 5+6 is %d\n",5+6);
    printf("The value of 5.1+6.1 is %f\n",5.1+6.1);
    float r=9.0;
    int n=7;
    printf("The value of r/n is %f\n",r/n);
    float g=r/4;//legal
    //a=b=c is illegal and b=c=a is legal
    printf("%f",g);
    return 0;
}