#include "my_functions.h"
#include <assert.h>

void my_test(void) {
    assert(add(5, 2) == 7);

    assert(add(2, 3) == 5);

    assert(add(4, 5) == 9);
}