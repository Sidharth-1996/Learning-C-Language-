#include<stdio.h>  //confussion see from code with harry's video watch video at(8:18:02)
void sumandavg(int a,int b,int *sum,float *avg);
int main()
{
    int a ,b,sum;
    float avg;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    sumandavg(a,b,&sum,&avg);
    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The average of %d and %d is %f\n",a,b,avg);
    return 0;
}
void sumandavg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)(a+b)/2;
    return ;
}