#include <stdio.h>
#include <stdlib.h>

float divisao(){

}

int main (){
	
	int num1, num2, c, r;
		
	printf("-------------------\n");
	printf("GERADOR DE TABUADAS\n");
	printf("-------------------\n");
	
	printf("Digite o numero que deseja multiplicar: ");
	scanf("%d",&num1);
	
	printf("Digite ate quantas vezes deseja saber: ");
	scanf("%d",&num2);
	
	c = 1;
	
	while (c <= num2){
		r = num1 * c;
		printf("%d * %d = %d\n",num1,c,r);
		c++;
	}	
	return 0;
}
