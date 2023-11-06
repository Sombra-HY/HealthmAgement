#include <stdio.h>

//
// Created by lsomb on 26/10/2023.
//
void input(const char *message, const char *format, void *data) {
    printf("%s", message);
    scanf(format, data);
}
