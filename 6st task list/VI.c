/*
Faça um programa que leia um email. Identifique se consta o símbolo @ no texto lido. Caso verdadeiro, informe
que o email é válido. 
*/

#include <string.h>
#include <stdio.h>

#define TAM 100


int CheckEmail( char* text)
{
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if(text[i] == "@")
            return 1;
    }    

    return 0;
}

int main(int argc, char const *argv[])
{
    char email[TAM];    

    printf("\nDigite o email: ");
    scanf(" %s", email);

    if(CheckEmail(email))
        printf("\nEmail Valido!");
    else
        printf("\nEmail Invalido!");

    return 0;
}
