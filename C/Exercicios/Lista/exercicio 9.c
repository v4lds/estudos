#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int idade;
	char F, nome, sexo;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite o sexo (m/f): ");
	scanf("%s",&sexo);
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	if ( (sexo == 'F' || sexo == 'f') && idade < 25) {
			printf("ACEITA.");	
	} else {
		printf("NAO ACEITA.");
	}
}
