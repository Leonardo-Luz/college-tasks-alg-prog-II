/*
Faça um programa na linguagem C que solicite ao usuário dois textos. Então crie uma função que combine os
textos. Essa função receberá por parâmetro os 2 textos.
*/

#include <string.h>
#include <stdio.h>

#define TAM 300
#define SUMTAM 600

char* SumText( char** text , int tam)
{
    int i, j;
    char Sum[SUMTAM];

    int count = 0;

    for(i = 0; i < tam; i++)
    for(j = 0; j < strlen(text[i]); j++)
    {
        Sum[count] = text[i][j];

        count++;
    }

    return Sum;
}

int main(int argc, char const *argv[])
{
    char textos[2][TAM];    

    printf("\nDigite o primeiro Texto: ");
    scanf(" %[^\n]s", textos[0]);

    printf("\nDigite o segundo Texto: ");
    scanf(" %[^\n]s", textos[1]);

    char fullText[SUMTAM] = SumText( textos , 2 );

    printf("\nSoma dos texto: \n ' %s '", fullText);

    return 0;
}
