/*
    Faça uma função capaz de receber por parâmetro 1 número inteiro. Então imprima na tela uma mensagem.
    Chame a função na main.
    Exemplo: se o valor passado for 5. Imprimir: “O número passado foi 5”
*/

#include <stdio.h>

void PrintNumber( int num )
{
    printf("O numero passado foi %d \n", num);
}

int main(int argc, char const *argv[])
{
    PrintNumber( 5 );
    return 0;
}
