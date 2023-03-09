#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int idade;
    char confirmacao[3];

    printf ("Qual seu nome?\n");
    scanf ("%s", nome);

    printf ("Entao seu nome e %s... qual e a sua idade\n", nome);
    scanf ("%d", &idade);

    printf ("Seu nome e %s e voce tem %d anos certo?\n", nome, idade);
    scanf ("%s", confirmacao);

    if (strcmp(confirmacao, "sim") == 0 ) {
        printf("Perfeito, para finalizar me diga seu sobrenome\n");
        scanf("%s", sobrenome);
        printf("Isso quer dizer que seu nome completo e %s %s e voce tem %d anos...\n", nome, sobrenome, idade);

    }else{ 
        printf("recomece o script\n");
    }
    return 0;
    }
