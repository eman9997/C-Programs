// Emanuel Fonseca CSC 251

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   
    int r = rand() % 10 + 1; // generates random number
    
    int magic = 0;
    int guess; 
    int counter = 0; 

    

    while (magic != guess)    // keep doing it until user is right
    {
	printf("Guess my number! ");

        scanf("%d", &guess);

        if (guess == r)
        {
           
            printf("correct!\n");

        }

        if (guess < r)
        {
            printf("Your guess is too low. Guess again. "); // gives user a hint
        }

        if (guess > r)
        {
            printf("Your guess is too high. Guess again. ");
        }
    } 

    return 0;
}

