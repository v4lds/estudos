#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1, resultado;
		
	printf("Digite o numero: ");
	scanf("%d",&num1);
	
	resultado = num1 % 3;
    
	if (resultado == 0){
		
		printf("e multiplo de 3.");
		
	} else {
		
		printf("nao e multiplo de 3.");
		
	}
}
