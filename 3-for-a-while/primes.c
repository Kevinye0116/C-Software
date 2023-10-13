//
// Created by Kevin Y. on 2023/10/11.
// Copyright (c) Kevin Y. on 2023/10/11.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int max = 0;
    scanf("%d", &max);

    int count = 0;

    // TODO: print primes between 1 and max

    for (int number = 2; number <= max; number++) {
        bool is_prime = true;
        for (int factor = 2; factor <= sqrt(number); factor++) {
            if (number % factor == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            count++;
            // printf("%d ", number);
        }
    }
    printf("\n count = %d\n", count);
    return 0;
}