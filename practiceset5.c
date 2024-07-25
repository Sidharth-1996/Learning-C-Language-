#include <stdio.h> //not doing the  reverse //star(int *arr) isliye lete h call by reference ki wajah se
void reverse(int *arr, int n){ //agr * nhi lenge toh call by value hoga and copied value m change hoga 
//but we want ki original value m change ho
   int temp;
   for(int i=0;i<(n/2);i++){
       temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
   }
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
    void reverse(score,n);
    for(int i=0;i<n;i++){
        printf("The value of %dth element is %d\n",i+1,score[i]);
    }
    return 0;
}