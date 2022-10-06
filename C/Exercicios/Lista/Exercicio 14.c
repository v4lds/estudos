#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Informe a idade: ");
    scanf("%d",&idade);

    if (idade < 18){

        printf("Você tem %d anos, e é menor de idade.",idade);


    } else {

        printf("Você tem %d anos, e é maior de idade.\n",idade);

        if (idade > 65){

            printf("Você tem mais de 65 anos.",idade);

        }
    }
}
