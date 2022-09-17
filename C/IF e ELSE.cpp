#include <stdio.h>

int main (){
	
	int nota;
	
	printf("Digite a nota do aluno:\n");
	scanf("%d", &nota);
	
	if (nota >= 7.0){
		printf("Voce foi aprovado(a)!\n");
	} else{
		printf("Voce foi reprovado(a)!\n");
	}
}
