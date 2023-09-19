/*
    Faça uma função capaz de receber por parâmetro 1 número inteiro. Então imprima na tela uma mensagem.
    Chame a função na main.
    Exemplo: se o valor passado for 5. Imprimir: “O próximo número é 6”
*/

#include <stdio.h>

void PrintNextNumber( int num )
{
    printf("O proximo numero e %d \n", num + 1);
}

int main(int argc, char const *argv[])
{
    PrintNextNumber( 5 );
    return 0;
}
