#include<stdio.h>
int main()
{
    int score[10],*ptr=&score[0];
    for(int i=0;i<10;i++){
        printf("Enter the %dth score :\n",i+1);
        scanf("%d",&score[i]);
    }
    int *ptr2=&score[2];
    // printf("The value of 'marks[2]' is %u\n",ptr2);
    // printf("The value of 'ptr+2' is %u\n",ptr+2);
    if (ptr+2==ptr2){
        printf("These points to the same location in the memory\n");
    }
    else{
        printf("These points regers to the different locations in the memory\n");
    }
    return 0;
}