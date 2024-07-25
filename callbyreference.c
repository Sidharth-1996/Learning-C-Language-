#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main()
{
    int a=8,b=5;
    printf("\n\n");
    printf("The value of a and b is %d and %d\n",a,b);
    printf("\n");
    wrong_swap(a,b);//will not wprk due to call by value
    printf("The value of a and b after wrong swap is %d and %d\n",a,b);
    printf("\n");
    swap(&a,&b);//will work due to call by reference
    printf("The value of a and b after the execution of swap is %d and %d\n",a,b);
    printf("\n");
    return 0;
}
void wrong_swap(int a,int b){
    int c; /*it will swap the copy not the original one and hence will not works*/
    c=a;
    a=b;
    b=c;
}
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}