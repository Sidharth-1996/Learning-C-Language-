#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    printf("Printing thr table of 5\n\n");
    for(int i=0;i<10;i++){
        printf("5 * %d = %d\n",i+1,5*(i+1));
    }
    //clrscr();
    getch();
    return 0;
}