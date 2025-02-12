#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess;
    int no_guess = 0;
    srand(time(NULL));
    printf("\n Welcome to the Guessing Game..\n\n");

    random = rand() % 100 + 1;
    /* printf("%d", random); */

    do
    {
        printf("Enter the number from (1 to 100):");
        scanf("%d", &guess);
        no_guess++;

        if (guess > random)
        {
            printf("Guess the smaller Number.\n");
        }else if (guess < random)
        {
            printf("Guess the larger Number.\n");
        }else{
            printf("\n\nCongratulation You win the Game. \n You are successfully guess the number in %d attempts", no_guess);
        }
        
        
    } while (guess != random);
    return 0;
}