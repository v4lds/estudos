#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_tam 50

int main () {
	
	int np = 0;
	int i = 0;
	int idade = 0;
	int c = 0;
	char esc = 's';
	char sexo;
	char nome [50];
	char lista_nome [max_tam][50];
	int lista_idade [max_tam];
	char lista_sexo [max_tam];
	int index = 0;
	
	printf("----------------\n");
	printf("DADOS CADASTRAIS\n");
	printf("----------------\n");
	
	while (esc == 's'){
		
		printf("Digite o nome:");
		gets(nome);
		fflush(stdin);
		
		strcpy (lista_nome[index], nome);
		
		printf("Digite a idade:");
		scanf("%d",&idade);
		fflush(stdin);
		
		lista_idade [index] = idade;
		
		printf("Digite o sexo (f/m):");
		scanf("%c",&sexo);
		fflush(stdin);
		
		lista_sexo[index] = sexo;
		
		puts("Deseja continuar?");
		scanf("%s",&esc);
		fflush(stdin);
		
		index++;
	}
	
	for (c=0;c<index;c++){
		
		printf("--------------\n");
		printf("NOME: ");
		puts(lista_nome[c]);
		printf("IDADE: %d\n",lista_idade[c]);
		printf("SEXO: %c\n",lista_sexo[c]);
		printf("--------------\n");
	}
}
