#include<stdio.h>
#include<math.h>
int main()
{
    int a,c;
    printf("Enter the value of side of square :\n");
    scanf("%d",&a);
    c=pow(a,2);
    printf("The area of square of side %d is %d",a,c);
    return 0;
}