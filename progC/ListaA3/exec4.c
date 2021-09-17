#include<stdio.h>

void main(){

    float x, y, maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    if(x > y){
        maior = x;
    }
    else{
        maior = y;
    }

    printf("O maior numero entre %.2f e %.2f : %.2f", x, y, maior);
}