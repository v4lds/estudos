#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nm = 0;
	int c = 0;
	float i = 0;
	int v[nm];
	float m = 0.0;
	float n1 = 0.0;
	float r = 0.0;
	float s = 0.0;
	
	printf("Digite a quantidade de notas: ");
	scanf("%d",&nm);
	
	while (c < nm){
		
		printf("Digite a nota: ");
		scanf("%f",&i);
		v[c] = i;
		r = r + i;
		c++;
	}
	s = r / nm;
	printf("Resultado: %.2f",s);
}
