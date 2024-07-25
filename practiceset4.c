#include<stdio.h>
int main()
{
    int num,tab[10];
    printf("Print the table of any number\n-------------------------\n");
    printf("Enter the number you want to print table of \n");
    scanf("%d",&num);
    // printf("Processing your query.....................\n"); added just for fun
    for(int i=0;i<10;i++){
        tab[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d * %d = %d\n",num,i+1,tab[i]);
    }
    return 0;
}