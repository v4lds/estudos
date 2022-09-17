#include <stdio.h>

int teste(int n1p, int n2p){
	return n1p + n2p;
}
int main (){
	
	int retornoMetodo;
	int n1;
	retornoMetodo = teste(1, 2);
	printf("soma %d",retornoMetodo);
	
	if (retornoMetodo == 0){
		printf("legal %d",retornoMetodo);
	}
}
