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

    for (l=1;l<3;l++){
        for (c=1;c<3;c++){

            printf ("Qual número deseja atribuir à matriz na posição %d,%d: ",l,c);
            scanf("%d",num);

            num = matriz[l][c];

        }
    }
    for (i=0;i<9;i++){
    printf("|%d|",matriz[l][c]);
    }
}