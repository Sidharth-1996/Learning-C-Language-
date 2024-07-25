#include<stdio.h>
#include<conio.h>
void revarr(int *arr,int len);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},len=10;  
    printf("Printing the array on screen before reversing........\n\n");
    for(int i=0;i<10;i++){
        printf("The %d element of array is %d\n",i+1,arr[i]);
    }
    
    revarr(arr,len);

    printf("/n/nPrinting the array on screen after reversing........\n\n");
    for(int i=0;i<10;i++){
        printf("The %d element of array is %d\n",i+1,arr[i]);
    }

    //clrscr();
    getch();
    return 0;
}
void revarr(int *arr,int len){
    int temp;
    for(int i=0;i<(len/2);i++){
        temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
}