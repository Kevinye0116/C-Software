//
// Created by Kevin Ye on 9/15/2023.
// Copyright (c) Kevin Ye, 2023

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int high = 100;
    int chance = 7;
    /*
     * print the rule of the game
     */
    printf("The system will generate a random number between 1 and %d.\n"
           "What you need to do is to guess the correct number.\n"
           "You have %d chances in total.\n", high, chance);

    /*
     * generate a random number
     */
    srand(time(NULL));
    int secret = rand() % high + 1;
    int guess;
    while (chance > 1) {
        /*
         * let the player enter his/her guess number
         */
        printf("You have now %d chances.\n", chance);
        printf("Enter your guess:");

        /*
         * store the guess number,
         * compare it with the secret,
         * and inform the player of the result
         */
        scanf("%d", &guess);
        if (guess == secret) {
            printf("Congratulations! Mission Completed!\n");
            return 0;
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
    printf("You have now only 1 chance left.\nEnter your last guess:");
    scanf("%d", &guess);
    if (guess == secret)
        printf("Congratulations! Mission Completed!\n");
    else
        printf("You are out of chance! Mission failed!\n");
    return 0;
}