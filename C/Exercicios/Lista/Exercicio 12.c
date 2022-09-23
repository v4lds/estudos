#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero = 0;
	int maior = 0;
	int c;
	c = 1;
	
	for (c=1; c<=3; c++){
		printf("Digite o %d.o numero: ",c);
		scanf("%d",numero);
		if (numero > maior){
			maior = numero;	
		}
	c++;
	}
}
