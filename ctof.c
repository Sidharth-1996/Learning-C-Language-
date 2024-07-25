#include<stdio.h>
int main()
{
    float c,d;
    printf("Enter the temperature in degree celcius \n");
    scanf("%f",&c);
    d=c*1.8;
    printf("Temperature in degree Fahrenheit is %f",d+32);
    return 0;
}