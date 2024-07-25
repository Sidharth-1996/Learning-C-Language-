#include<stdio.h>
// 

void printarray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,ptr[i]);   
        ptr[2]=55555;
    }
}


int main()
{
    int array[]={1,2,34,4,5,56,5};
    printarray(array,7);
    printf("%d",array[2]);//this value will be changed in main array as well
    return 0;
}