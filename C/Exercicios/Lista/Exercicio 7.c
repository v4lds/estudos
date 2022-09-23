#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int num1;
	
	printf ("digite o numero: ");
	scanf("%d",&num1);
	
	if (num1 >= 20 && num1 <= 90){
		
		printf("o numero %d esta entre 20 e 90",num1);
	} else {
		printf("o numero %d nao esta entre 20 e 90",num1);
	}
}
