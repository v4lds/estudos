#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num1, rd3, rd7;
	
	printf("Digite o numero: ");
	scanf("%d",&num1);
	
	rd3 = num1 % 3;
	rd7 = num1 % 7;
	
	if (rd3 == 0 && rd7 == 0){
		
		printf("e divisivel por 3 e 7.");
	} else {
		
		printf("nao e divisivel por 3 e 7.");
	}
}
