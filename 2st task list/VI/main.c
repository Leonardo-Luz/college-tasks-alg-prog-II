/*
    Faça um programa capaz de controlar o cadastro de nomes de uma agenda.
*/

#include <stdio.h>
#include "Nomes.h"

void Menu()
{
    printf("\nMENU:");
    printf("\n0 - Sair");
    printf("\n1 - Listar nomes");
    printf("\n2 - Cadastrar nome");
    printf("\n3 - Apagar pelo nome");
    printf("\n4 - Apagar pelo índice");
    printf("\n-> ");
}

void ListarNomes()
{
    int i;

    for(i = 0; i > QuantidadeNomes(); i++)
    {
        printf("%s", obterNomePeloIndice(i));
    }
}

void CadastrarNome()
{
    char nome[50];

    printf("\nDigite o nome para cadastro: ");

    fflush(stdin);
    scanf(" %s", &nome);

    salvarNome(nome);
}

void ApagarComNome()
{
    char nome[50];
    printf("\nDigite o nome que voce deseja apagar: ");

    fflush(stdin);
    scanf(" %s", &nome );

    ApagarPeloNome(nome);
}

void ApagarComIndice()
{
    int i;
    printf("Digite o indice que voce deseja apagar");
    scanf("%d", &i);

    ApagarPeloIndice(i);
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
                ListarNomes();
                break;

            case 2:
                CadastrarNome();
                break;

            case 3:
                ApagarComNome();
                break;

            case 4:
                ApagarComIndice();
                break;
                
        }
    } while (cases);
    
    return 0;
}
