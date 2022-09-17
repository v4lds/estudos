#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados"

int main (){
	
	printf("%s\n", texto);
		
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o nome:\n");
	scanf("%s", &nome);
	
	printf("DADOS:\n");
	printf("Idade informada: %d.\n", idade);
	printf("Altura informada: %.2f.\n", altura);
	printf("Nome informado: %s.\n", nome);
}
