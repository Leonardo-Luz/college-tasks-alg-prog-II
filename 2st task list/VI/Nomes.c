#include "Nomes.h"
#define MAX_NOMES 5
#define TAM 20
char nomes[MAX_NOMES][TAM];
int quantidade = 0;

// NAO CRIAR NOVAS VARIAVEIS GLOBAIS. CRIE NOVAS VARIAVEIS APENAS DENTRO DAS FUNCOES

#include <string.h>

int salvarNome(char nome[])
{
    if(quantidade >= TAM)
        return 0;


    strcpy( nomes[quantidade], nome );
    return 1;
}

int QuantidadeNomes()
{
    return quantidade;
}

char* obterNomePeloIndice(int indice)
{
    if(indice > quantidade - 1) return;

    return nomes[indice];
}

int ApagarPeloNome(char* nome)
{
    int i;
    for (i = 0; i < quantidade; i++)
    {
        if(strcmp(nomes[i] , nome) == 0)
        {
            quantidade--;
            strcpy(nomes[i] , nomes[quantidade]);
            return 1;
        }
    }

    return 0; 
}

int ApagarPeloIndice(int indice)
{
    if(indice > quantidade - 1)
        return 0;

    quantidade--;    
    strcpy(nomes[indice], nomes[quantidade]);

    return 1; 
}

