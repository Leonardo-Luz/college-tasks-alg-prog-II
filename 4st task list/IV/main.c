/*
 Faça um programa capaz de realizar a venda de 5 produtos de uma loja. Os produtos deverão ser
armazenados num array de Structs (registros). 
Cada produto armazenará os seguintes dados: código, nome, preço de venda, estoque atual, quantidade 
vendida.
O sistema conterá com o seguinte menu:
MENU:
0 – Sair
1 – Listar produtos
2 – Cadastrar produto
3 – Apagar produto
4 – Vender
5 - Total vendido
*/

#include <stdio.h>
#include "Produto.h"

void Menu()
{
    printf("MENU:");
    printf("0 - Sair");
    printf("1 - Listar produtos");
    printf("2 - Cadastrar produto");
    printf("3 - Apagar produto");
    printf("4 - Vender");
    printf("5 - Total vendido");    
}

void ListarProdutos()
{
    int i;
    for (i = 0; i < QtdProduto(); i++)
    {
        Produto prod = ObterProduto(i);

        printf("\n %d - %s - %f - %d - %d ",
            prod.cod,
            prod.nome,
            prod.preco,
            prod.estoque,
            prod.venda
        );
    }    
}

void Cadastro()
{
    Produto temp;

    printf("\nDigite o codigo do produto ");  
    scanf("%d", &temp.cod);

    printf("\nDigite o nome do produto ");  
    scanf(" %s", temp.nome);

    printf("\nDigite o preco do produto ");  
    scanf("%f", &temp.preco);

    printf("\nDigite o estoque do produto ");  
    scanf("%d", &temp.estoque);

    temp.venda = 0;

    if( CadastrarProduto( temp ) )
        printf("\nCadastrado!");
    else 
        printf("\nErro!");
}

void Remover()
{
    int cod;

    ListarProdutos();

    printf("\nDigite o codigo do produto ");  
    scanf("%d", &cod);    

    if(RemoverProduto(cod))
        printf("\nRemovido!");
    else
        printf("\nErro!");
}

void Vender()
{
    int cod , qtd;

    ListarProdutos();

    printf("\nDigite o codigo do produto ");  
    scanf("%d", &cod);    

    printf("\nDigite a quantidade ");  
    scanf("%d", &qtd);    

    if(VenderProduto( cod , qtd ))
        printf("\nVendido!");
    else
        printf("\nErro!");
}

void TotalVendido()
{
    int qtd = 0;

    int i;
    for (i = 0; i < QtdProduto(); i++)
    {
        qtd += ObterProduto(i).venda;
    }    

    printf("\nForam vendidos %d produtos!", qtd);
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
                ListarProdutos();
                break;

            case 2:
                Cadastro();
                break;

            case 3:
                Remover();
                break;

            case 4:
                Vender();
                break;

            case 5:
                TotalVendido();
                break;
        }
    } while (cases);
    
    return 0;
}
