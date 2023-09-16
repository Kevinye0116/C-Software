//
// Created by Kevin Ye on 9/15/2023.
//

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int high = 100;
    int chance = 7;
    /*
     * print the rule of the game
     */
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances.\n", high, chance);

    /*
     * generate a random number
     */
    srand(time(NULL));
    int secret = rand() % high + 1;

    while (chance > 0) {
        /*
         * let the player enter his/her guess number
         */
        printf("Enter your guess.\n");

        /*
         * store the guess number,
         * compare it with the secret,
         * and inform the player of the result
         */
        int guess;
        scanf("%d", &guess);
        if (guess == secret) {
            printf("You win!\n");
            break;
        } else if (guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }
        /*
         * loop: repeat until the player wins or loses
         */
        chance--;
    }
    return 0;
}