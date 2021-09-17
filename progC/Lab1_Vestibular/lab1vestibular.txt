#include<stdio.h>
#include<stdlib.h> 
#include<math.h> 
#include<string.h>

//Marco Royo Felippe - Fatec ZL
//ALP - Prof Eliane
void main(){

    int count_a, count_b, count_c, count_d, count_i, idade, n_idade,pontuacao_final;
    char alternativa;
    char nome[31];
count_a = 0;
count_b = 0;
count_c = 0;
count_d = 0;
count_i = 0;

    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    n_idade = idade;

   system("clear");
//Primeira questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Qual a sua etinia?\n");
    printf("++\n");
    printf("++   a - Negro\n");
    printf("++   b - Pardo\n");
    printf("++   c - Branco\n");
    printf("++   d - Outros\n");
    printf("++\n");
    printf("++    ");

        n_idade = idade;

    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }

   system("clear");
//Segunda questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Em qual regiao do pais que voce mora?\n");
    printf("++\n");
    printf("++   a - Norte / Nordeste\n");
    printf("++   b - Centro Oeste\n");
    printf("++   c - Sul\n");
    printf("++   d - Sudeste\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }



   system("clear");
//Terceira questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Onde voce cursou o ensino medio?\n");
    printf("++\n");
    printf("++   a - Escola Publica - integralmente\n");
    printf("++   b - Escola Publica - parcialmente\n");
    printf("++   c - Escola Privada - bolsista\n");
    printf("++   d - Escola Privada\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }


   system("clear");
//Quarta questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Renda familiar:\n");
    printf("++\n");
    printf("++   a - Ate 1 salario minimo\n");
    printf("++   b - Ate 2 salarios minimos\n");
    printf("++   c - Ate 4 salarios minimos\n");
    printf("++   d - Acima de 4 salarios minimos\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }

   system("clear");
//Quinta questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Voce possui experiencia profissional, no curso escolhido?\n");
    printf("++\n");
    printf("++   a - Acima de 2 anos\n");
    printf("++   b - Ate 2 anos\n");
    printf("++   c - Ate 1 ano\n");
    printf("++   d - Sem experiencia\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }

   system("clear");
//Sexta questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Voce fez cursinho preparatorio?\n");
    printf("++\n");
    printf("++   a - Sim, publico.\n");
    printf("++   b - Sim, privado.\n");
    printf("++   c - Sim, on-line.\n");
    printf("++   d - Nao fiz cursinho.\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }

   system("clear");
//Setima questão
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Das alternativas abaixo, escolha a que voce se enquadra. ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++\n");
    printf("++\n");
    printf("++    Voce possui outra formacao de nivel superior?\n");
    printf("++\n");
    printf("++   a - Sim, Completa - Publica.\n");
    printf("++   b - Sim, Completa - Privada.\n");
    printf("++   c - Incompleta.\n");
    printf("++   d - Nao possui.\n");
    printf("++\n");
    printf("++    ");
    scanf("%s", &alternativa);

    switch(alternativa){
        case 'a' : count_a++;
        break;
        case 'b' : count_b++;
        break;
        case 'c' : count_c++;
        break;
        case 'd' : count_d++;
        break;
        default  : count_i++;
    }

//Pontuação final

    pontuacao_final = (count_a * 10) + (count_b * 8) + (count_c * 6) + (count_d * 4) + (count_i * 0);

   system("clear");
//Resultado da pesquisa
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++             PESQUISA - VESTIBULAR E VOCE                 ++\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++ Nome: %s          - Idade: %d    \n", nome, n_idade);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("++                  Resultado da pesquisa                   ++\n");
    printf("++\n");
    printf("++  Sua pontuacao final foi: %d pontos\n", pontuacao_final);
    printf("\n++  Voce respondeu:");
    printf("\n++  Alternativa a         - %d X 10 pontos, %2d pontos", count_a, count_a * 10);
    printf("\n++  Alternativa b         - %d X 08 pontos, %2d pontos", count_b, count_b * 8);
    printf("\n++  Alternativa c         - %d x 06 pontos, %2d pontos", count_c, count_c * 6);
    printf("\n++  Alternativa d         - %d X 04 pontos, %2d pontos", count_d, count_d * 4);
    printf("\n++  Alternativa Invalida  - %d X 00 pontos, %2d pontos\n", count_i, count_i * 0);

    if(count_i != 0){
        printf("++\n");
        printf("++ Voce performou com uma pontuacao baixa, porque respondeu\n");
        printf("++ uma ou mais questoes com alternativas invalidas, por favor, \n");
        printf("++ refazer o teste.\n");
    }
    else{
        if(pontuacao_final == 70){
            printf("++\n");
            printf("++ Parabens, voce atingiu a pontuacao maxima!!\n");
            printf("++ Voce e um de nossos melhores candidatos. \n");
            printf("++ Continue com seu esforco, para voce nao existra limites.\n");
        }
        else{
            if((pontuacao_final >= 40) && (pontuacao_final < 70)){
                printf("++\n");
                printf("++ Voce performou muito bem, voce e merecedor da sua conquista.\n");
                printf("++ Continue investindo seu tempo em educacao, que todos seus sonhos \n");
                printf("++ serao possiveis.\n");
            }
            else{
                    printf("++\n");
                    printf("++ Voce conquistou menos que 40 pontos, porem não desista.\n");
                    printf("++ Continue a se esforcar que conseguira suas conquistas. \n");
                    printf("++ Foco nos estudos.\n");
            }

        }
    }
}