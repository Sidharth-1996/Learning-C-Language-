#include<stdio.h>
float force(float m);
int main()
{
    float a;
    printf("Enter the mass of the body in kg\n\n");
    scanf("%f",&a);
    printf("The force on the body due to acceleration due to gravity is %.2f N",force(a));
    return 0;
}

float force(float m){
    return m*9.8;
}
