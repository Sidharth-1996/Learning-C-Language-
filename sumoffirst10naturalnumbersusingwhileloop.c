#include<stdio.h>
int main()
{
    int i=1,sum=0;
   /* while(i<=10){
        sum+=i;
        i++;
    }*/
   /* for(i;i<=10;i++){
        sum+=i;
    }*/
    do{
        sum+=i;
    }while(i<=10);
    printf("Sum of the first 10 natural numbers is %d",sum);
    return 0;
}