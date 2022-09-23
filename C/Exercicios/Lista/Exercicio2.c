#include <stdio.h>
#include <stdlib.h>

int main() {
	//CONSTRUIR UM ALGORITMO QUE LEIA DOIS VALORES INTEIROS E EFETUE A ADIÇÃO, CASO O RESULTADO SEJA MAIOR QUE 10 APRESENTA-LO.
	
	int n1, n2, R;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	R = n1 + n2;
	
	if (R > 10) {
		printf("O resultado da sua soma e: %d\n",R);
	}
}
