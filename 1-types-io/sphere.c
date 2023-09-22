//
// Created by Kevin Ye on 9/22/2023.
//

#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * radius * radius;
    double volume = 4.0 / 3 * PI * radius * radius * radius;

    // .4: precision
    // 15: minimum width
    // -: flag (left-justified)
    printf("%-15.4f : surface_area\n%-15.4f : volume\n",
           surface_area, volume);

    return 0;
}