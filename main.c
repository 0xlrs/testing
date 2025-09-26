#include <stdio.h>
#include "my_functions.h"
#include "my_tests.h"

int main(void) {
    int first = 5;
    int second = 2;
    int sum = add(first, second);
    double div = divide(first, second);

    my_test();
    puts("Os testes passaram...");
    jump();

    printf("%d + %d = %d\n", first, second, sum);
    jump();

    printf("%d / %d = %.1f\n", first, second, div);
    jump();
    
    return 0;
}