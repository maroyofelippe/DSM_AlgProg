#include<stdio.h>

void main(){

    int x, resp;

    printf("Digite o numero para saber o modulo: ");
    scanf("%d", &x);

    if(x > 0){
        resp = x;
    }
    else{
        resp = x * -1;
    }

    printf("O modulo de %d sera %d", x, resp);
}