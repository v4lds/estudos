#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dd, mm, aaaa, nome;
	
	printf("Digite o nome: ");
	scanf("%d",&nome);
	
	printf("Digite a data de nascimento (dd,mm,aaaa): ");
	scanf("%d",&dd);
	scanf("%d",&mm);
	scanf("%d",&aaaa);
	
	printf("Nome: %d",nome);
	printf("Idade: %d,%d,%d",dd,mm,aaaa);
}
