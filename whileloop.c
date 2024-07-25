#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    //while(a>=0){  -------->this will lead to an infinite loop
        while(a<10){
        a++;
        printf("%d\n",a);
    }
    return 0;
}