#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menuGenerico(char* menu[], int qtde){
    int index = 0;
    int escolha = 0;
    while (index <qtde){
        printf("%s\n",menu[index]);
        index++;
    }
    printf("Selecione uma opção: ");
    scanf("%d",&escolha);
    return escolha;

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char* escolhas[] = {"[1] Opção 1","[2] Opção 2"};
    int op = menuGenerico(escolhas,2);
    printf("%d",op);
}
