#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int guess, int target) {
    if (guess < target) {
        return -1; // Guess is too low
    } else if (guess > target) {
        return 1;  // Guess is too high
    } else {
        return 0;  // Correct guess
    }
}

void main() {
    // Seed the random number generator with current time
    srand(time(0));  

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;

    int userGuess;
    printf("Welcome to the Number Guessing Game!\n");
    int game_on = 1;

    while (game_on){
        printf("Kindly Enter your guess (between 1 and 100): ");
        scanf("%d", &userGuess);
        no_of_guesses++;
        int result = check(userGuess, randomNumber);
        if (result == 0) {
            printf("Congratulations! You've guessed the correct number %d in %d attempts.\n", randomNumber, no_of_guesses);
            game_on = 0; 
        } else if (result == -1) printf("Your guess is too low. Try again!\n");

          else printf("Your guess is too high. Try again!\n");
        
    }
}
