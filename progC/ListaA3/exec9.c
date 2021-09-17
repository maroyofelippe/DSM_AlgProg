#include<stdio.h>

void main(){

    float peso, altura;
    char sexo;

    printf("Informe o seu sexo-> M para mulher e H para homem: ");
    scanf("%c", &sexo);

    printf("Digite sua altura em metros (ex: 1.72): ");
    scanf("%f", &altura);

    if((sexo != 'M') && (sexo != 'm') && (sexo != 'H') && (sexo != 'h')){
        printf("O sexo informado nao corresponde a uma opcao valida!\n");
    }
    else{
        if((sexo == 'M') || (sexo == 'm')){
            peso = (62.1 * altura) - 44.7;
        }
        else{
            peso = (72.7 * altura) - 58;            
        }
        printf("O peso ideal para voce: %2.f Kg por ser do sexo %c e com altura de %.2f\n", peso, sexo, altura);
    }
}