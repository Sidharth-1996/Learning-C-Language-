#include<stdio.h>
int main()
{
    /* Check it's solution from code with harry's video
    can we multiply an integer with a float ???*/
    float p,r,t;
    printf("Enter the principle amount \n");
    scanf("%f",&p);
    printf("Enter the rate of interest \n");
    scanf("%f",&r);
    printf("Enter the time(in years) \n");
    scanf("%f",&t);
    printf("Simple Interest is %f",(p*r*t)/100);
    
    return 0;
}