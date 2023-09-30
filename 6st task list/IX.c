/*
Faça um programa na linguagem C que solicite ao usuário o nome de uma pessoa. Faça uma função que
verifique se o nome digitado seja um nome composto, ou seja, deve possuir um nome, um espaço em branco e
um sobrenome. O espaço em branco não deve estar no início e nem no final do texto
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

int isCompound( char* text )
{
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if(text[i] == " " && (i != 0 || i != strlen(text) - 1))
        {
            return 1;
        }
    }    

    return 0;
}

int main(int argc, char const *argv[])
{
    char nome[TAM];

    printf("\nDigite o nome: ");
    scanf(" %[^\n]s", nome);

    if(isCompound)
        printf("\nO nome e composto!");
    else
        printf("\nO nome nao e composto!");
        
    return 0;
}
