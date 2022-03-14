#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int N)
{
    int number, guess, numberofguess = 0;

    number = rand() % N;

    printf("Guess a number between 1 and %d\n", N);

    do {

        if (numberofguess > 9){
            printf("\nYou lose. The number was %d.\n", number);
            break;
        }

        scanf("%d", &guess);

        if (guess > number){
            printf("Too high!\n");
            numberofguess++;
        }
\
        else if(guess < number){
            printf("Too low!\n");
            numberofguess++;
        }

        else{
            printf("You guessed the number in %d attempts!", numberofguess);
        }
    } while (guess != number);
}

int main()
{
    int N = 30;

    guess(N);

    return 0;
}
