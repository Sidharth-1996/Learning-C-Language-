//at most once
/*#include<stdio.h>
int main()
{
    int i=11;
    do{
        printf("1");
        i++;
    }while(i<11);
    return 0;
}*/
//at least twice
/*#include<stdio.h>
int main()
{
    int i=9;
    do{
        printf("|\n");
        i++;
    }while(i<=11);
    return 0;
}*/
//at least once
#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("*\n");
        i++;
    }while(i<=10);
    return 0;
}