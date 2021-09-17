#include<stdio.h>

void main(){

    float sal_atual, sal_novo, sal_aumento;

    printf("Informe seu salario atual: R$ ");
    scanf("%f", &sal_atual);

    if(sal_atual < 500.0){
        sal_aumento = sal_atual;
    }
    else{
        if((sal_atual >=500.0) && (sal_atual < 1000.0)){
            sal_aumento = sal_atual * 0.75;
        }
        else{
            if((sal_atual >= 1000.0) && (sal_atual < 1500.0)){
                sal_aumento = sal_atual * 0.50;
            }
            else{
                if((sal_atual >= 1500.0) && (sal_atual < 2000.0)){
                    sal_aumento = sal_atual * 0.25;
                }
                else{
                    if((sal_atual >= 2000.0) && (sal_atual < 3000.0)){
                        sal_aumento = sal_atual * 0.10;
                    }
                    else{
                        if((sal_atual >= 3000.0) && (sal_atual < 5000.00)){
                            sal_aumento = sal_atual * 0.05;
                        }
                        else{
                            sal_aumento = sal_atual * 0.02;
                        }
                    }
                }
            }
        }
    }

    sal_novo = sal_atual + sal_aumento;

    printf("O funcionario teve um aumento de R$ %.2f e seu novo salario sera R$ %.2f", sal_aumento, sal_novo);
}