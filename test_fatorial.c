#include <assert.h>
#include <stdio.h>

#include "function_fatorial.c"

int main() {

    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(6) == 720);

    printf("Todos os testes passaram!\n");

    printf("Criado por Ana");

    return 0;
}
