#include<stdio.h>
float average(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("average of 3 numbers\n\n");
    printf("Enter the numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The average of 3 numbers is %f",average(a,b,c));
    return 0;
}

float average(int a,int b,int c){
    return (float)(a+b+c)/3;
}