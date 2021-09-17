#include<stdio.h>

void main(){

    float n1, n2, n3, n4, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 5.0){
        printf("Aluno aprovado com media = %.2f", media);
    }
    else{
        printf("Aluno reprovado com media = %.2f", media);     
    }    
}