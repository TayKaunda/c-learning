#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    const int MIN =1;
    const int MAX = 1000;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    // uses the current time as a seed
    srand(time(0));

    //generates a random number 
    answer = rand() % (MAX - MIN + 1) + MIN;

    do
    {
        printf("Enter a guess");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high\n");
        }
        else if (guess < answer) {
        
        printf("Too low\n");
        }
        else{
            printf("You are correct!");
        }
        guesses++;
    } while (guess != answer);

    printf("***************\n");
    printf("answer: %d\n", answer);
    printf("guess: %d\n", guesses);
    printf("***************");
    



    return 0;
}