#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Informe a idade: ");
    scanf("%d",&idade);

    if (idade < 18){

        printf("Voc� tem %d anos, e � menor de idade.",idade);


    } else {

        printf("Voc� tem %d anos, e � maior de idade.\n",idade);

        if (idade > 65){

            printf("Voc� tem mais de 65 anos.",idade);

        }
    }
}
