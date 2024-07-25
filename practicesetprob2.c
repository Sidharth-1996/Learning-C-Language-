#include<stdio.h>
void divby2(int a);
int main()
{
    int i=4;
    int *j=&i;
    printf("The address of i is %u\n",j);
    divby2(i);
    printf("The address of i after the execution of the function is %u\n",j);
    return 0;
}
void divby2(int a){
    int c=a/2;
}
// address of i remains unchanged even after passing it to a function 

// don't have the answer of why