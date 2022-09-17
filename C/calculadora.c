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
	scanf("%d",&esc);
	
	C = 1;
	R = 0;
	
	switch (esc){
		case 1:
			printf("Quantos numeros deseja somar?\n");
			scanf("%d",&nsom);
			while (C <= nsom){
				printf("digite o %do. numero:\n",C);
				scanf("%f",&num1);
				R = R + num1;
				C++;
			}
			printf("O resultado da 1soma e: %.2f.\n",R);
			break;
		case 2:
			C = 2;
			printf("Quantos numeros deseja subtrair?\n");
			scanf("%d",&nsom);
			printf("digite o 1o. numero: \n",C);
			scanf("%f",&num1);
			R = num1;
			while (C <= nsom){
				printf("digite o %do. numero: \n",C);
				scanf("%f",&num2);
				R = R - num2;
				C++;
			}
			printf("O resultado da subtracao e: %.2f.\n",R);
			break;
		case 3:
			C = 2;
			printf("Quantos numeros deseja multiplicar?\n");
			scanf("%d",&nsom);
			printf("digite o 1o. numero: \n",C);
			scanf("%f",&num1);
			R = num1;
			while (C <= nsom){
				printf("digite o %do. numero: \n",C);
				scanf("%f",&num2);
				R = R * num2;
				C++;
			}
			printf("O resultado da multiplicacao e: %.2f.\n",R);
			break;
		case 4:
			C = 2;
			printf("Quantos numeros deseja dividir?\n");
			scanf("%d",&nsom);
			printf("digite o 1o. numero: \n",C);
			scanf("%f",&num1);
			R = num1;
			while (C <= nsom){
				printf("digite o %do. numero: \n",C);
				scanf("%f",&num2);
				R = R / num2;
				C++;
			}
			printf("O resultado da divisao e: %.2f.\n",R);
			break;
		default:
			printf("O valor inserido e invalido.");
			break;
	}		
}
