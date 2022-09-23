#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dd,mm,aaaa;
	char nome;
	
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua data de nascimento(dd mm aaaa): ");
	scanf("%d,%d,%d",&dd,&mm,&aaaa);
	
	printf("Nome: %s.",nome);
	printf("Data de nascimento: %d/%d/%d.",dd,mm,aaaa);
	
}
