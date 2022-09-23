#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int esc, nsom, C;
	float num1, num2, R;
	
	printf("---------------\n");
	printf("  CALCULADORA\n");
	printf("---------------\n");
	printf("Selecione a operacao matematica que deseja executar:\n");
	printf("[1] Para executar uma adicao.\n");
	printf("[2] Para executar uma subtracao.\n");
	printf("[3] Para executar uma multiplicacao.\n");
	printf("[4] Para executar uma divisao.\n");
	scanf("%d",esc);
	
	C = (1);
	R = (0);
	
	switch (esc)
		case 1:
			printf("Quantos numeros deseja somar?\n");
			scanf("%d",nsom);
			while (C <= nsom){
				printf("digite o %d.o. numero:\n",C);
				scanf("%f",num1);
				R = R + num1;
				C++;
			break;
			}
			printf("O resultado da soma e: %f\n",R);
			
		case 2:
			printf("Quantos numeros deseja subtrair?\n");
			scanf("%d",nsom);
			while (C <= nsom){
				printf("digite o numero base:\n");
				scanf("%f",num1);
				printf("digite o %d.o. numero:\n",C);
				scanf("%f",num2);
				R = num1;
				R = R - num2;
				C++;
				break;
		break;
			}
			printf("O resultado da subtracao e: %f\n",R);
		case 3:
			printf("Quantos numeros deseja multiplicar?\n");
			scanf("%d",nsom);
			while (C <= nsom){
				printf("digite o numero base:\n");
				scanf("%f",num1);
				printf("digite o %d.o. numero:\n",C);
				scanf("%f",num2);
				R = num1;
				R = R * num2;
				C++;
				break;	
		break;
			}
			printf("O resultado da subtracao e: %f\n",R);
		case 4:
			printf("Quantos numeros deseja dividir?\n");
			scanf("%d",nsom);
			while (C <= nsom){
				printf("digite o numero base:\n");
				scanf("%f",num1);
				printf("digite o %d.o. numero\n",C);
				scanf("%f",num2);
				R = num1;
				R = R / num2;
				C++;
			}
		break;
			printf("O resultado da divisao e: %f\n",R);
		default:
			printf("O valor indicado e invalido");
			printf("O resultado da subtracao e: %f\n",R);
}
