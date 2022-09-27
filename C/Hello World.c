#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    
    int v = 1;
    int i = 10;
    //v--;
    if (v<0) {
        printf("Erro encontrado, divisor = 0");
        return 1;
    }
    printf("Conta executada.");
    return i/v;
}