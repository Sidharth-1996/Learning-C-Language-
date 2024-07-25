/*Futuristic approach :
 This game can be turned into multiplayer battle 
 and make the player with least no. of attempts the winner*/
#include <stdio.h> 
#include <stdlib.h>
#include<conio.h>
#include <time.h>
int main()
{
    int number, g, choice,count=0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guessing The Number Game\n\n");
    printf("Press 1 to start the game\n");
    scanf("%d", &choice);
    while(choice == 1)
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &g);
        if (g == number)
        {
            printf("You have guessed the right number\n");
            count+=1;
            printf("No. of Attempts : %d",count);
            break;
        }
        else if (g > number)
        {
            printf("Please enter the smaller number\n");
            count+=1;
            printf("Press 1 to re-guess the number\nPress 2 to Leave\n");
            scanf("%d", &choice);
           
        }
        else if (g < number)
        {
            printf("Please enter the larger number\n");
            count+=1;
            printf("Press 1 to re-guess the number\nPress 2 to Leave\n");
            scanf("%d", &choice);
           
        }
    }
    if(choice==2){
        printf("You have lost the game\n");
    }

    getch();
    return 0;
}