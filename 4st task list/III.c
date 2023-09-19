/*
    Crie um registro representando um atleta. Esse registro deve conter o nome do atleta, seu esporte, idade e 
    altura. Agora, escreva um programa que leia os dados de seis atletas. Calcule e exiba os nomes do atleta 
    mais alto e do mais velho.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 6

typedef struct
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
}Atleta;

void Cadastro( Atleta* atleta, int tam )
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("\nDigite o nome do atleta: ");
        scanf(" %s", &atleta->nome);

        printf("\nDigite o esporte do atleta: ");
        scanf(" %s", &atleta->esporte);

        printf("\nDigite a idade do atleta: ");
        scanf(" %s", &atleta->idade);

        printf("\nDigite a altura do atleta: ");
        scanf(" %s", &atleta->altura);
    }    
}

Atleta atleta[TAM];

void atletasComp()
{
    int temp = 0;
    int i;
    for (i = 1; i < TAM; i++)
    {
        if(atleta[i].idade > atleta[temp].idade)
        {
            temp = i;
        }
    }

    printf("\nO atleta mais velho e o %s", atleta[temp].nome);
    
    temp = 0;

    for (i = 1; i < TAM; i++)
    {
        if(atleta[i].altura > atleta[temp].altura)
        {
            temp = i;
        }
    }

    printf("\nO atleta mais alto e o %s", atleta[temp].nome);
}

int main(int argc, char const *argv[])
{

    Cadastro( &atleta , TAM );
    
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("\n%s - %s - %d - %f ", 
            atleta[i].nome,
            atleta[i].esporte,
            atleta[i].idade,
            atleta[i].altura
        );
    }
    
    atletasComp();

    return 0;
}


