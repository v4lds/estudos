#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int nmaior = 0;
    int nmenor = 0;
    for(int i=1;i<=5;i++){

        int n1;

        printf("Digite o %d.o n�mero: ",i);
        scanf("%d",&n1);

        if (n1 >= nmaior){

            nmaior = n1;

        } else {

            nmenor = n1;

            }
        }

    printf("O maior n�mero � %d, e o menor � %d.",nmaior,nmenor);

}
