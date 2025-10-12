/*
name: maxwell gachoka
year 1 sem1
intro to programming
subject: guessing game
*/
#include <stdio.h>

int main() {
    int secret_number = 10;
    int guessed_number;
    int number_of_guesses = 0;

    printf("Enter your guess: ");
    scanf("%d", &guessed_number);

    while (guessed_number != secret_number) {
        number_of_guesses++;

        if (guessed_number > secret_number) {
            printf("Too high! : ");
        } else {
            printf("Too low! : ");
        }

        scanf("%d", &guessed_number);
    }

    number_of_guesses++;
    printf("Congratulations! You guessed it in %d tries.\n", number_of_guesses);

    return 0;
}