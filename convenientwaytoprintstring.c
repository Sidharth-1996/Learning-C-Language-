#include<stdio.h>
int main()
{
    // char *ptr="Sidharth";
    char ptr[]="Sidharth"; //why do we use thus asteric sign here?
    // char *ptr={'s','i','d','\0'}; why it is not working??
    printf("%s\n",ptr);
    return 0;
}