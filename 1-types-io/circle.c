//
// Created by Kevin Ye on 9/22/2023.
// Copyright (c) KevinYe on 9/22/2023.

#include <stdio.h>


int main(void) {
    const double PI = 3.14159;
    int radius = 10;

    //radius=5;

    // magic number
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    // %d: decimal
    // .2: precision
    printf("radius = %d\ncircumference = %.2f\narea = %.2f\n",
           radius, circumference, area);

    return 0;
}