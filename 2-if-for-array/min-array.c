//
// Created by Kevin Ye on 2023/10/8.
//

#include <stdio.h>

#define NUM_SIZE 5

int main(void) {
    // VLA: variable-length array
    int numbers[NUM_SIZE] = {1968, 1961, 1969, 1954, 1969};

    int min = numbers[0];

    for (int i = 0; i < NUM_SIZE; i++) {
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    printf("min = %d\n", min);

    return 0;
}