//
// Created by Kevin Y. on 2023/10/11.
// Copyright (c) Kevin Y. on 2023/10/11.

#include <stdio.h>

int main(void) {
    int lines = 0;
    scanf("%d", &lines);

    // TODO: print stars pyramid
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines - 1 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        if (i < lines - 1) {printf("\n");}
    }

    return 0;
}