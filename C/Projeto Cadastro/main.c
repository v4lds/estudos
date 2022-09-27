#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define max_tam 50

void proc_nome () {
        char nome [50];
        printf("Digite o nome: ");
        gets(nome);
        fflush(stdin);

        strcpy (lista_nome[index], nome);

    }


int main () {

    int index = 0;
    int menu_esc;
    char nome [50];
    char lista_nome [max_tam][50];
    int idade = 0;
    int lista_idade [max_tam];
    char sexo;
    char lista_sexo [50];
    char esc = 's';


    printf("----------------\n");
    printf("DADOS CADASTRAIS\n");
    printf("----------------\n");

    printf("[1] Para criar um novo cadastro.\n");
    printf("[2] Para deletar um cadastro.\n");
    printf("[3] Para listar todos os cadastros.\n");
    scanf("%d",&menu_esc);

    switch (menu_esc){

        case 1: 

        while (esc == 's'){
            

        }

    }
}