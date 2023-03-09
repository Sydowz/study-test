#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome_completo[256];
    int idade;

    printf("Qual seu nome completo?\n");
    scanf("%s", nome_completo);

    printf("Ok %s, Agora me confirma sua idade.\n", nome_completo);
    fflush(stdin);
    scanf(" %d", &idade);

    if(idade >= 18){

        printf ("Você é maior de idade!");

    }else{

        printf("Você é menor de idade!");

    }


    return 0;
}
