#include<stdio.h>
int main()
{
    int r;
    printf("Enter your ratings(1-5)\n");
    scanf("%d",&r);

    switch(r){
        case 1:
        printf("Your rating is 1\n");
        break;
        case 2:
        printf("Your rating is 2\n");
        break;
        case 3:
        printf("Your rating is 3\n");
        break;
        case 4:
        printf("Your rating is 4\n");
        break;
        case 5:
        printf("Your rating is 5\n");
        break;
        default:
        printf("Your rating is invalid\n");
        break;
    }
    return 0;
}