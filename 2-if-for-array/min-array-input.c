//
// Created by Kevin Ye on 2023/10/8.
//

#include <stdio.h>

#define NUM_SIZE 5

int main(void) {
    int numbers[NUM_SIZE] = {0};

    for (int i = 0; i < NUM_SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];

    for (int i = 0; i < NUM_SIZE; i++) {
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    printf("min = %d\n", min);

    return 0;
}