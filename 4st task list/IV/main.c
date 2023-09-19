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
    printf("0 – Sair");
    printf("1 – Listar produtos");
    printf("2 – Cadastrar produto");
    printf("3 – Apagar produto");
    printf("4 – Vender");
    printf("5 - Total vendido");    
}