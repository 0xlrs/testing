#include <stdio.h>
#include "my_functions.h"

void jump(void) {
    puts("<pulei>");
}

int add(int a, int b) {
    return a + b;
}

double divide(int a, int b) {
    if (b == 0) return 0;
    else return (double) a / b;
}