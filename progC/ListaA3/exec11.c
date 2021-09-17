#include<stdio.h>

void main(){

    float v1, v2, v3, mediap;

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &v3);

    mediap = (v1 * 0.2) + (v2 * 0.3) + (v3 *0.5);

    printf("O valor da media ponderada será: %.2f\n", mediap);
}