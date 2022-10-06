#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3
#define Class struct

Class Pessoa {

    int idade;
    float peso;
    char nome[50];

};

//typedef struct tipo_pessoa tipo_pessoa;

int main (){
    setlocale (LC_ALL,"Portuguese");

    Class Pessoa lista[TAM];
    int i;

    for (i=0;i<TAM;i++){

        Class Pessoa p;

        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s",&p.nome);
        fflush (stdin);

        puts("Idade: ");
        scanf("%d",&p.idade);
        fflush (stdin);

        puts("Peso: ");
        scanf("%f",&p.peso);
        fflush (stdin);

        lista[i] = p;
    }
    system("cls");

    for (i=0;i<TAM;i++){

        printf("----- PESSOA %d -----\n", i+1);
        printf("    Nome: %s\n",lista[i].nome);
        printf("    Idade: %d\n",lista[i].idade);
        printf("    Peso: %.2f\n",lista[i].peso);
    }
    printf("---------------------\n");
}