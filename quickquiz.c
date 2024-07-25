#include<stdio.h>
int main()
{
    int i=0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n",i);
        }
        i++; //i++(increment operator) is used to increase i by 1 whenever the loop executes
    }
    return 0;
}