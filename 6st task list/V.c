/*
Faça um programa na linguagem C que solicite ao usuário o nome de uma pessoa. Faça uma função que corrija
se o nome digitado não começa com letra maiúscula, ou seja, se o nome começar com letra minúscula, a função
deve corrigir para começar com letra maiúscula.
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define TAM 100


int FirstToUpper( char** text)
{
    if(!isupper(*text[0]))
    {
        *text[0] = toupper(*text[0]);
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    char nome[TAM];    

    printf("\nDigite o nome: ");
    scanf(" %[^\n]s", nome);

    if(FirstToUpper(&nome))
        printf("\nNome Corrigido com Sucesso!");
    else
        printf("\nNome ja estava correto!");

    printf("\n%s", nome);

    return 0;
}
