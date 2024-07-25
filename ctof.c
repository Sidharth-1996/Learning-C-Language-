#include<stdio.h> 
float tempconvertor(float a);
int main()
{
    float a;
    printf("Enter the temperarure in celcius\n");
    scanf("%f",&a);
    printf("Temperature in fahrenheit is %f",tempconvertor(a));
    return 0;
}

float tempconvertor(float a)
{
    return (a*9/5)+32;
}