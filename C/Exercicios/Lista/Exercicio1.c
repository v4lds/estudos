#include <stdio.h>
#include <stdlib.h>

int main() {
	//ELABORE UM ALGORITMO QUE LEIA UM NUMERO QUALQUER E IMPRIMA CASO SEJA MAIOR QUE 20.
	
	int n1;
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	if (n1 > 20){
		printf("Numero digitado: %d\n",n1);
	}
}
