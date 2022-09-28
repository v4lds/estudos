#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz[3][3];
int controle = 1;

void mensagem_erro(){

    system ("cls");

    printf("Preencha a matriz antes de imprimir.\n");

    system ("pause");
    system ("cls");
    return;
}

void preencher(){

    int l = 0;
    int c = 0;
    printf("-----------------\n");
    printf("PREENCHA A MATRIZ\n");
    printf("-----------------\n");

    for (l=0;l<3;l++){
        for (c=0;c<3;c++) {
            printf("Digite o número que deseja adicionar à matriz na posição [%d, %d]:",l,c);
            scanf("%d",&matriz[l][c]);
        }
    }
    system("cls");
    controle = 0;
}

void imprimir(){

    system("cls");

    int l = 0;
    int c = 0;

    printf("-----------------\n");
    printf("MATRIZ PREENCHIDA\n");
    printf("-----------------\n");

    printf("-------------------------------------------------\n");
    for (l=0;l<3;l++){
        printf("|");
        for (c=0;c<3;c++) {
            printf("\t%d\t|",matriz[l][c]);
        }
        printf("\n");
    }
    printf("-------------------------------------------------\n");
    system("pause");
    system("cls");
}

void diagonal_principal(){
    
    system("cls");

    int l = 0;
    int c = 0;

    printf("------------------\n");
    printf("DIAGONAL PRINCIPAL\n");
    printf("------------------\n");

    for (l=0;l<3;l++){
        printf("|");
        for (c=0;c<3;c++){
            if (l == c){
                printf("\t%d\t|",matriz[l][c]);
            } else {
                printf("\t \t|");
            }
        }
        printf("\n");
    }
    system ("pause");
    system("cls");
}

void limpar(){

    system ("cls");

    int l = 0;
    int c = 0;
    printf("-----------------\n");
    printf("LIMPANDO A MATRIZ\n");
    printf("-----------------\n");

    for (l=0;l<3;l++){
        for (c=0;c<3;c++) {
            matriz[l][c] = 0;
        }
    }
    system ("pause");
    system("cls");
    controle = 1;
}

int menu(){

    int escolha = 0;
    
    printf("--------------------\n");
    printf("OPERAÇÕES MATRICIAIS\n");
    printf("--------------------\n");

    printf("[1] Para preencher uma matriz.\n");
    printf("[2] Para listar a matriz completa.\n");
    printf("[3] Para listar a diagonal principal da matriz.\n");
    printf("[4] Para limpar a matriz.\n");
    printf("[5] Para sair do programa.\n");

    scanf("%d",&escolha);

    return escolha;
}

int main () {

    system("cls");

    setlocale(LC_ALL,"Portuguese");

    int opcao_selecionada = 0;

    while (opcao_selecionada != 5){

        opcao_selecionada = menu();

        switch (opcao_selecionada){

            case 1:
                system("cls");
                preencher();
                break;
            case 2: 
                if (controle == 1){
                    mensagem_erro();
                } else {
                    imprimir();
                }
                break;
            case 3:
                if (controle == 1){
                    mensagem_erro();
                } else {
                    diagonal_principal();
                }
                break;
            case 4:
                limpar();
                break;
            case 5:
                //essa opção termina o programa.
                break;
            default:
                //Qualquer opção que não esteja acima, o programa continua a execução.
                printf("Opção inválida.\n");
                opcao_selecionada = 0;
                break;
        }
    }
}