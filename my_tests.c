#include <assert.h>
#include <stdio.h>
#include "my_functions.h"

void my_test(void) {
    assert(add(5, 2) == 7);

    assert(add(-2, 3) == 1);

    puts("Todos os testes foram concluidos com sucesso!");
}