#include<stdio.h>
void gm();
void gf();
void gn();
int main()
{
    printf("Executing functions.........\n\n");
    gm();
    return 0;
}
void gm(){
    printf("Good Morning\n\n");
    gf();
}
void gf(){
    printf("Good Afternoon\n\n");
    gn();
}
void gn(){
    printf("Good Night\n\n");
}