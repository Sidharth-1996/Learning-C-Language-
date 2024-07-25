#include<stdio.h>
int change(int a);
int main()
{
    int b=1,c;
    printf("the value of b before execution of change function is %d\n",b);
    c=change(b);
    printf("the value of b after execution of change function is %d\n",b);
    printf("the value of c after execution of change function is %d\n",c);
    return 0;
}

int change(int a){

a=77;                        // => Misnomer

return a;

}