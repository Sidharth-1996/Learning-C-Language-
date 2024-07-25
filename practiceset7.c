#include<stdio.h>
int main()
{
    int tab[3][10];
    for(int i=0;i<10;i++){
        tab[0][i]=2*(i+1);
        tab[1][i]=7*(i+1);
        tab[2][i]=9*(i+1); 
    }
    // printf("%d",tab[0][1]);
    for(int i=0;i<10;i++){
        printf("2*%d is %d\n",(i+1),tab[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("7*%d is %d\n",(i+1),tab[1][i]);
    }
    printf("\n");    
    for(int i=0;i<10;i++){
        printf("9*%d is %d\n",(i+1),tab[2][i]);
    }

    return 0;
}