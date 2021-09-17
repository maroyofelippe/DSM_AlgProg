#include<stdio.h>
#include<math.h>

void main(){

    float a, b, c, delta, x1, x2;

    printf("Digite o valor para A: ");
    scanf("%f", &a);

    printf("Digite o valor para B: ");
    scanf("%f", &b);

    printf("Digite o valor para C: ");
    scanf("%f", &c);

    delta = (b * b - 4 * a * c);

    if(delta < 0){
        printf("Nao existem raizes reais para esta equacao!!");
    }
    else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        prinff("As raizes para equacao sera: x1 = %.2f e x2 = %.2f", x1, x2);
    }

}