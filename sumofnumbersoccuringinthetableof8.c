#include<stdio.h>
int main()
{
    int i,sum=0,j;
    for(i=1;i<=10;i++){
        j=8*i;
        sum+=j;
    }
    printf("The sum of the numbers occuring in the table of 8 is %d\n",sum);
    return 0;
}