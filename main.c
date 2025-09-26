#include <stdio.h>
#include "my_functions.h"
#include "my_tests.h"

int main(void) {
    int first = 5;
    int second = 2;
    int sum = add(first, second);
    double div = divide(first, second);

    printf(
        "%d + %d = %d\n"
        "%d / %d = %.1f\n", 
        first, second, sum,
        first, second, div
    );
    
    my_test();

    return 0;
}