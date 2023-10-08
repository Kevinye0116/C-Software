//
// Created by Kevin Ye on 2023/10/8.
//

#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;

    scanf("%d%d", &a, &b);

    // TODO: calculate the minimum of a and b

    int min = 0;

    // code style
    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    // min = a < b ? a : b;
    printf("min(%d, %d) = %d\n", a, b, min);

    return 0;
}