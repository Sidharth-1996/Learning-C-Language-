#include<stdio.h>
int main()
{
    float a;
    printf("Enter your salary per month(in terms of lakhs)\n");
    scanf("%f",&a);
    if(a<250000){
        printf("You don't have to pay any tax\n");
    }
    
    else if(a>=250000 && a<500000){
        printf("You have to pay tax of rupees %f\n",a*0.05);
    }

    else if(a>=500000 && a<1000000){
        printf("You have to pay tax of rupees %f\n",a*0.2);
    }
    
    else if(a>=1000000){
        printf("You have to pay tax of rupess %f\n",a*0.3);
    }
    
    return 0;
}