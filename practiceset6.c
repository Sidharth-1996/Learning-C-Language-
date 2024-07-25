#include<stdio.h>
int count(int arr[],int n){
    int temp,count=0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            count+=1;
        }
    }
    return count;
}
int main()
{
    int n, score[n];
    printf("Enter the number of records you want to enter :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the  score of %dth player :\n", i + 1);
        scanf("%d", &score[i]);
    }
    printf("The number of positive values in your array is : %d",count(score,n));
    return 0;
}