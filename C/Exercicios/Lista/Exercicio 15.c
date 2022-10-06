#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    int n1,n2,m;

    printf("Digite o nome do aluno: ");
    scanf("%s",&nome);

    printf("Digite a nota da primeira prova: ");
    scanf("%d",&n1);

    printf("Digite a nota da segunda prova: ");
    scanf("%d",&n2);

    system("cls");

    m = (n1 + n2) / 2,00;

    printf("Aluno: %s.\n",nome);
    if (m > 7){
        printf("Aprovado. Média %d.\n",m);
    } else if ((m <= 7) && (m >= 3)){
        printf("Recuperação. Média %d\n",m);
    } else {
        printf("Reprovado. Média %d\n",m);
    }
}
