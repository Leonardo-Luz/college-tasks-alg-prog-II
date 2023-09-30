/*
Faça um programa na linguagem C que solicite um texto ao usuário. Então envie esse texto por parâmetro para
uma função que consegue contar quantas letras são minúsculas
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define TAM 300


int QtyLowerCase( char* text)
{
    int i;

    int count = 0;

    for (i = 0; i < strlen(text); i++)
    {
        if(!islower(text[i]))
        {
            count ++;
        }
    }
    
    return count;
}

int main(int argc, char const *argv[])
{
    char texto[TAM];    

    printf("\nDigite o Texto: ");
    scanf(" %[^\n]s", texto);

    int maisc = QtyLowerCase( texto );

    printf("\n%d Letras minusculas", maisc);

    return 0;
}
