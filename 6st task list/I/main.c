/*
Faça um programa na linguagem C que solicite um texto para o usuário. Então o seu programa deve possuir
funções que tenham as funcionalidades:
a. Uma função que calcula retorna o tamanho de uma string. Essa função deve receber por parâmetro o
texto.
DICA: usar strlen() https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
b. Uma função para calcular quantos espaços em branco existem no texto. Essa função deve receber por
parâmetro o texto.
c. Uma função para calcular quantas letras ‘A’ (maiúscula apenas) existem no texto. Essa função deve
receber por parâmetro o texto.
d. Uma função para converter todas as letras para maiúscula.. Essa função deve receber por parâmetro o
texto.
DICA:
Usar a função toupper
https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
*/

#include <stdio.h>

#include "String.h"

#define TAM 100

void Menu()
{
    printf("\nMenu: ");
    printf("\n0: Sair ");
    printf("\n1: Tamanho de uma palavra ");
    printf("\n2: Quantos espaços em uma palavra ");
    printf("\n3: Quantos A em uma palavra ");
    printf("\n4: Mudar palavra para letra maiscula ");

    printf("\n-> ");
}

void TamString()
{
    char palavra[TAM];
    printf("\nDigite a palavra: ");
    scanf(" %s", palavra);

    printf("\nEsta palavra tem %d letras! ", StringLen(palavra));
}

void StringCheckSpace()
{
    char palavra[TAM];
    printf("\nDigite uma Frase: ");
    scanf("%[^\n]s", palavra);

    printf("\nEsta palavra tem %d Espacos! ", StringSpace(palavra));    
}

void StringCheckA()
{
    char palavra[TAM];
    printf("\nDigite a palavra: ");
    scanf(" %s", palavra);

    printf("\nEsta palavra tem %d letras A! ", StringA(palavra));
}

void StringMaisc()
{
    char palavra[TAM];
    printf("\nDigite a palavra: ");
    scanf(" %s", palavra);

    printf("\nEm maiusculo: %s !", StringToUpper(palavra));
}

int main(int argc, char const *argv[])
{
    int cases;

    do
    {
        Menu();
        scanf("%d", &cases);

        switch (cases)
        {
            case 1:
                TamString();
                break;

            case 2:
                StringCheckSpace();
                break;

            case 3:
                StringCheckA();
                break;

            case 4:
                StringMaisc();
                break;
        }
    } while (cases);
    
    return 0;
}
