/*
#include<stdio.h>
int main()
{
    int n,i=1,divide,count=0;
    printf("****Check whether the number is prime or not****\n\n");
    printf("Enter the number :\n");
    scanf("%d",&n);
    for(i;i<=n;i++){
        divide=n%i;
        if(divide==0){
            count+=1;
        }
    }
    if(count==2){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int n,divide,count=0,j=1;
    printf("****Check whether the number is prime or not****\n\n");
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(j<=n){
        divide=n%j;
        j++;
        if(divide==0){
            count+=1;
        }
    }
    if(count==2){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int n,divide,count=0,j=1;
    printf("****Check whether the number is prime or not****\n\n");
    printf("Enter the number :\n");
    scanf("%d",&n);
    do{
        divide=n%j;
        j++;
        if(divide==0){
            count+=1;
        }
    }
    while(j<=n);
    if(count==2){
            printf("%d is a prime number\n",n);
        }
        else{
            printf("%d is not a prime number\n",n);
        }
        return 0;
}