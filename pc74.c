#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter the number of which you want to print the table of :\n");
    scanf("%d",&num);
    for(i=1;i<11;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    //clrscr();
    getch();
    return 0;
}