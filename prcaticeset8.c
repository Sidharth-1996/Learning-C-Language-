#include<stdio.h> //sahi se nhi chal   rha  
int main()
{
    int m,a;
    int tab[m][10];
    printf("Enter the number of table you want :\n");
    scanf("%d",&m);
    for(int i=1;i<(m+1);i++){
        printf("Enter the %dth number of which you want to print the table of :\n",i);
        scanf("%d",&a);
        for(int j=0;j<m;j++){
            for(int k=0;k<10;k++){
                tab[j][k]=a*(k+1);
                printf("%d\n",a*(k+1));
            }
        }
    }

    return 0;
}