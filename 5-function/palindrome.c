//
// Created by Kevin Y. on 2023/10/12.
// Copyright (c) Kevin Y. on 2023/10/12.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

bool IsPalindrome(const char str[]);

int main() {
    printf("Input a string containing at most 20 characters.\n");
    scanf("%20s", string);

    printf("\"%s\" is %s a palindrome.\n", string,
           IsPalindrome(string) ? "" : "not");

    return 0;
}

bool IsPalindrome(const char str[]) {
    int len = strlen(str);

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }

    return true;
}