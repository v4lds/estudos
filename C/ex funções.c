#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maior (float num1, float num2){

    if (num1>num2){
        return num1;
    } else {
        return num2;
    }
}

int main () {
    setlocale (LC_ALL,"Portuguese");

    float x = 0;
    float y = 0;
    float m = 0;

    printf("Digite o primeiro número: \n");
    scanf("%f",&x);
    
    printf("Digite o segundo número: \n");
    scanf("%f",&y);

    m = maior(x,y);

    printf("Maior: %.2f\n", m);

}