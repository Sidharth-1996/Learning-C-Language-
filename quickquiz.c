#include<stdio.h>
void gm();
void gf();
void gn();
int main()
{
    printf("Executing functions.........\n\n");
    gm();
    gf();
    gn();
    return 0;
}
void gm(){
    printf("Good Morning\n\n");
}
void gf(){
    printf("Good Afternoon\n\n");
}
void gn(){
    printf("Good Night\n\n");
}