#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //  Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand()%100)+1;
    int no_of_guesses =0;
int guessed;
    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    
    do
    {
        printf("Guess the number");
        scanf("%d",&guessed);
        if (guessed>randomNumber)
        {
            printf("Lower number please!\n");
        }
        else
        printf("Higher number please\n");
        
        no_of_guesses++;
        /* code */
    } while (guessed!=randomNumber);
    printf("You guessed the number in %d guesses",no_of_guesses);
    
 return 0;
}















