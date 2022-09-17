#include <stdio.h>
#include <stdlib.h>

void finalizandoPrograma(){
	printf("--------------------\n");
	printf("Obrigado pela doacao\n");
	printf("--------------------\n");
}

int main (){
	
	int n1;
	float n2;
	
	printf("--------------------------\n");
	printf("   CRIANCA ESPERANCA\n");
	printf("--------------------------\n");
	
	printf("[1] Para doar 10 reais.\n");
	printf("[2] Para doar 20 reais.\n");
	printf("[3] Para doar 50 reais.\n");
	printf("[4] Para doar outro valor.\n");
	printf("--------------------------\n");
	
	scanf("%d",&n1);
	
	switch (n1){
		case 1:
			printf("Voce doou R$10.00\n");
			finalizandoPrograma();
			break;
		case 2:
			printf("Voce doou R$20.00\n");
			finalizandoPrograma();
			break;
		case 3:
			printf("Voce doou R$50.00\n");
			finalizandoPrograma();
			break;
		case 4:
			printf("Digite o valor que deseja doar:\n");
			scanf("%f",&n2);
			
			printf("Voce doou R$%.2f.\n",n2);
			finalizandoPrograma();
			break;
		default:
			printf("Numero invalido\n");
			break;
	}
	
}
