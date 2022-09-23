#include <stdio.h>
#include <stdlib.h>

int main() {
	// CONSTRUIIR UM ALGORITMO QUE LEIA DOIS NUMEROS E EFETUE A ADIÇÃO. CASO O VALOR SOMADO SEJA MAIOR QUE 20, ESTE DEVERA SER APRESENTADO SOMANDO-SE A ELE MAIS 8
	int n1, n2, R;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	R = n1 + n2;
	
	if (R > 20) {
		R = R + 8;
		printf("O resultado da sua adicao (somada a +8) e: %d\n",R);
	}
}
