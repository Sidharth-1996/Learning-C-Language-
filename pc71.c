#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]={1,2,3,4,5},*ptr,*ptr2=&arr[2];
    ptr=arr;
    printf("The address of the first element of array is %u\n",ptr);
    printf("The address of the third element of array is %u\n",ptr2);
    printf("The address of the third element of array is %u\n",ptr+2);



    //clrscr();
    getch();
    return 0;
}