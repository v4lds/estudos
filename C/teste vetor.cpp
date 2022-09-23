#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nm, c, i;
	
	printf("Digite a quantidade de notas: ");
	scanf("%d",&nm);
	
	int v[nm];
	float m, n1, r, s;
	c = 0;
	r = 0;
	
	while (c < nm){
		
		printf("Digite a nota: ");
		scanf("%f",&i);
		v[c] = i;
		r += v[c];
		c++;
	}
	s = r / 5;
	printf("Resultado: %f",s);
}
