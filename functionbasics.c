#include<stdio.h>
void display(); //function prototype
int main()
{
    printf("Initializing display function\n\n");
    display(); //calling a function
    printf("Display function has finished it's work\n\n");
    return 0;
}

void display(){   //function definition
    printf("This is my first function\n\n"); 
}