#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character :\n");
    scanf("%c",&c);
    if(c>=97 && c<=122){
        printf("You have entered a lowercase character\n");
    }
    else{
        printf("You have entered a uppercase character\n");
    } //97-122
    return 0;
}