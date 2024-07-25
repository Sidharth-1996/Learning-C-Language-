#include<stdio.h>
int main()
{
    int x=3;
    int y=2;
    printf("The value of 3*x - 8*y is %d\n",3*x -8*y);
    printf("The value of 3*(x - 8*y) is %d\n",3*(x -8*y));
    /*precidence of operator will be followed only in the absence of paranthesis,
    inside paranthesis it is stll be followed butwill not be followed with the number outside it.*/
    printf("The value of 8*y/3*x is %d\n",8*y/3*x);
    //8*y/3*x will give wrong answer
    //8*2/3*3
    //16/3*3
    //5*3
    //15 hence,the answer is justified by the operator associativity
    //in associativity operations are done from left to right
    //associativity tab lagti h jab operators equal priority ke ho
    //nahi toh precidience se hi sab ho jata h 

    return 0;
}