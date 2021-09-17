#include<stdio.h>

void main(){

    float x, y, z;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite o terceiro numero: ");
    scanf("%f", &z);

    if((x < y) && (x < z)){
        if(y < z){
            printf("A ordem crescente sera: %f, %f, %f", x, y, z);
        }
        else{
           printf("A ordem crescente sera: %f, %f, %f", x, z, y); 
        }
    }
    else{
        if((y < x) && (y < z)){
            if(x < z){
               printf("A ordem crescente sera: %f, %f, %f", y, x, z); 
            }
            else{
                printf("A ordem crescente sera: %f, %f, %f", y, z, x);
            }
        }
        else{
            if((z < x) && (z < y)){
                if(x < y){
                    printf("A ordem crescente sera: %f, %f, %f", z, x, y);
                }
                else{
                    printf("A ordem crescente sera: %f, %f, %f", z, y, x);
                }
            }
        }
    }
}