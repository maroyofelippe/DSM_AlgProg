#include<stdio.h>

void main(){

    float preco_a, preco_n;
    int qtprod;

    printf("Informe a quantidade media de venda mensal do produto: ");
    scanf("%d", &qtprod);

    printf("Informe o preco atual do produto: R$ ");
    scanf("%f", &preco_a);

    if((qtprod < 500) && (preco_a < 30.0)){
        preco_n = preco_a * 1.1;
    }
    else{
        if((qtprod >= 1000) && (preco_a >= 80.0)){
            preco_n = preco_a * 0.95;
        }
        else{
            preco_n = preco_a * 1.15;
        }
    }

    printf("O novo preco do produto será: R$ %.2f", preco_n);
}