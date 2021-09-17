#include<stdio.h>

void main(){

    int ano_nasc, idade,ano_atual;

    printf("Informe o ano de seu nascimento (aaaa): ");
    scanf("%d", &ano_nasc);
    printf("Informe o ano atual (aaaa): ");
    scanf("%d", &ano_atual);

    idade = (ano_atual - ano_nasc);

    if(idade >= 18){
        printf("Com %d anos, voce e maior de idade.\n", idade);
    }
    else{
        printf("Com %d anos, voce e menor de idade.\n", idade);
    }
}