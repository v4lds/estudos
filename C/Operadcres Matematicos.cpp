#include <stdio.h>
#include <stdlib.h>

#define titulo "Operadores em C"

int main (){
	int A, B, soma, subtr, mult, divis;
	
	printf("%s\n", titulo);
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", subtr);
	printf("Multiplicacao: %d.\n", mult);
	printf("Divisao: %d.\n", divis);
}
