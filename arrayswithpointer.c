#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr=&marks[0];
    //ptr=marks;
    for(int i=0;i<4;i++){
        printf("Enter the marks of the %dth student\n",i+1);
        scanf("%d",ptr);
        ptr++;
        // scanf("%d",&marks[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        printf("The marks of the %dth student is %d\n",i+1,marks[i]);
    }
    return 0;
}