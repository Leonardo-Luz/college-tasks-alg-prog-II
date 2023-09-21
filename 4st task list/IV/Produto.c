
#include "Produto.h"

#define TAM 5

Produto produto[TAM];
int qtd = 0;


int CadastrarProduto( Produto prod )
{
    if(qtd >= TAM)
        return 0;

    produto[qtd] = prod;
    qtd++;
    return 1;
}

int RemoverProduto( int cod )
{
    int i;
    for(i = 0; i < qtd; i++)
    if(produto[i].cod == cod)
    {
        produto[i] = produto[qtd - 1];
        qtd --;
        return 1;
    }

    return 0;
}

int VenderProduto( int cod , int qtd_ )
{
    int i;
    for(i = 0; i < qtd; i++)
        if(produto[i].cod == cod)
            if (produto[i].estoque >= qtd_)
            {
                produto[i].estoque -= qtd_;
                produto[i].venda += qtd_;
                return 1;
            }

    return 0;
}

int QtdProduto()
{
    return qtd;
}

Produto ObterProduto( int indice )
{
    return produto[indice];
}