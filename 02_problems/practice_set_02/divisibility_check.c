#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {
    // Initializing all the variables
    int choose1, number, i, limit, choose2, lower, upper, random_in_range, j;

    // Prompt the user to choose between finding divisible numbers or guessing a random number
    printf("Enter 1, if you want to find all the numbers that are divisible & Enter 0, if you want to guess the number that is divisible: \n");
    scanf("%d", &choose1);

    // Option 1: Find all numbers divisible by a given number
    if (choose1 == 1) {
        // Ask for a number to check divisibility
        printf("Enter a number and we will check how many numbers are divisible by it: \n");
        scanf("%d", &number);

        // Ask for the upper limit to check divisibility
        printf("Enter the number till where you want the divisible: \n");
        scanf("%d", &limit);

        // Loop through numbers from 1 to the specified limit
        for (i = 1; i <= limit; i++) {
            // Check if the current number is divisible by the user's number
            if (i % number == 0) {
                printf("%d is divisible by %d\n", i, number);
            } else {
                printf("%d is not divisible by %d\n", i, number);
            }
        }
    }
    // Option 2: Guess a random number that is divisible by the target number
    else {
        // Explain the guessing game rules
        printf("A random number will be displayed on screen, You will have 10 chances in order to guess the correct number to win.\n");

        // Ask the user if they want to select the range of the random number
        printf("Do you wanna select the range of random number? Type 1 if yes. Type 0 if No.\n");
        scanf("%d", &choose2);

        // If user chooses to set the range, get the lower and upper bounds
        if (choose2 == 1) {
            printf("Enter the lower Limit: \n");
            scanf("%d", &lower);
            printf("Enter the upper Limit: \n");
            scanf("%d", &upper);
        }
        // If not, set default range (1 to 100)
        else {
            lower = 1;
            upper = 100;
        }

        // Seed the random number generator with the current time to ensure randomness
        srand(time(0));

        // Generate a random number within the specified or default range
        random_in_range = (rand() % (upper - lower + 1)) + lower;
        printf("Random number between %d and %d: %d\n", lower, upper, random_in_range);

        // Give the user 10 attempts to guess the correct number
        for (i = 0; i < 10; i++) {
            // Prompt the user for their guess
            printf("Enter your guess %d: \n", i + 1);
            scanf("%d", &number);  // Reading the user's guess as an integer

            // Check if the random number is divisible by the guessed number
            if (random_in_range != 0 && random_in_range % number == 0) {
                // If the guess is correct, print a congratulatory message and exit the loop
                printf("Congratulations! You won!\n");
                break;
            } else {
                // Calculate remaining attempts
                j = 9 - i;
                printf("Wrong! You have %d chances left.\n", j);
            }
        }

        // If the user used all attempts and didn't guess correctly, print a losing message
        if (i == 10) {
            printf("Disgrace! You Lost!\n");
        }
    }

    return 0;  // Exit the program
}
