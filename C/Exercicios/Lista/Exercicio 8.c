#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int ano_atual, ano_nasc, idade;
	
	printf("Digite o ano que voce nasceu: ");
	scanf("%d",&ano_nasc);
	
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	
	if (ano_atual > ano_nasc){
		
		idade = ano_atual - ano_nasc;
		
		printf("Voce tem %d anos.",idade);
	} else {
		printf("Valores invalidos.");
	}
}
