#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"Portuguese");

    int matriz[3][3];
    int l = 0;
    int c = 0;
    int num = 0;
    int i = 0;
    
    printf("--------\n");
    printf("MATRIZES\n");
    printf("--------\n");

    for (l=0;l<4;l++){
        printf("%d",l);
        printf("Digite o número que deseja adicionar à matriz:");
        scanf("%d",matriz[l][c]);

    }
}