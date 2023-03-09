#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
 
 setlocale(LC_ALL, "Portuguese_Brazil");

 char jogador[256];
 char jogador_2[256];
 char confirmacao[7];

 printf("Para iniciar a partida, digite iniciar\n");
 scanf("%s", confirmacao);
 
 if(strcmp(confirmacao, "iniciar") == 0){
    printf("Jogador 1, escolha sua jogada!\n");
    scanf("%s", jogador);

    printf("Jogador 2, sua vez!\n");
    scanf("%s", jogador_2);

    printf("Aguarde, estamos calculando o resultado...\n");
    if(strcmp(jogador, "pedra") == 0) {

            if (strcmp(jogador_2, "pedra") == 0) {
                printf("Empate!");
            }else if(strcmp(jogador_2, "papel") == 0) {
                printf("Jogador 2 venceu!");
            }else if(strcmp(jogador_2, "tesoura") == 0) {
                printf("Jogador 1 venceu!");
            }else{
                printf("Comando inválido, tente novamente utilizando Pedra, papel ou tesoura!");
            }

    }else if(strcmp(jogador, "papel") == 0) {

            if(strcmp(jogador_2, "papel") == 0) {
                printf("Empate!");
            }else if(strcmp(jogador_2, "tesoura") == 0) {
                printf("Jogador 2 venceu!");
            }else if(strcmp(jogador_2, "papel") == 0) {
                printf("Jogador 1 venceu!");
            }else{
                printf("Comando inválido, tente novamente utilizando Pedra, papel ou tesoura!");
            }


    }else if(strcmp(jogador, "tesoura") == 0) {

            if(strcmp(jogador_2, "tesoura") == 0) {
                printf("Empate!");
            }else if(strcmp(jogador_2, "pedra") == 0) {
                printf("Jogador 2 venceu!");
            }else if(strcmp(jogador_2, "papel") == 0) {
                printf("Jogador 1 venceu!");
            }else{
                printf("Comando inválido, tente novamente utilizando Pedra, papel ou tesoura!");
            }


        }else{

            printf("Comando inválido, tente novamente utilizando Pedra, papel ou tesoura!");

        }
}

    return 0;

}    