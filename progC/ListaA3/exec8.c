#include<stdio.h>

void main(){

    int x, teste1, teste2;

    printf("Digite o numero de teste: ");
    scanf("%d", &x);

    teste1 = x % 2;
    teste2 = x % 3;

    if((teste1 == 0) && (teste2 == 0)){
        printf("O numero %d e divisivel por 2 e por 3 ao mesmo tempo.", x);
    }
    else{
        printf("O numero %d nao e divisivel por 2 e por 3 aos mesmo tempo.", x);
    }
}