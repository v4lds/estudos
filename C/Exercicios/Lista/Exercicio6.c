#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float salb, prest, trintaPorCentoDoSalario;
	
	printf("Digite o salario bruto: ");
	scanf("%f",&salb);
	
	printf("Digite o valor da prestacao: ");
	scanf("%f",&prest);
	
	trintaPorCentoDoSalario = salb * 30/100;
	
	if (prest < trintaPorCentoDoSalario){
		
		printf("credito liberado.");
	} else {
		printf("credito nao liberado.");
	}
}
