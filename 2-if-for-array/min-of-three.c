//
// Created by Kevin Ye on 2023/10/8.
//

#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d%d", &a, &b, &c);

    // TODO: calculate the minimum of a, b and c
    int min = 0;
    if (a > b) {
        if (b > c) {
            min = c;
        } else {
            min = b;
        }
    } else {
        if (a > c) {
            min = c;
        } else {
            min = a;
        }
    }

    printf("min(%d, %d, %d) = %d\n", a, b, c, min);

    return 0;
}