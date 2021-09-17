#include<stdio.h>

void main(){

    int x,y, resultado, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;   
    }

    resultado = maior - menor;
    printf("O resultado da diferença entre %d - %d = %d", maior, menor, resultado );
}