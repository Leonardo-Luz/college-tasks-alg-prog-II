/*
    Faça uma função capaz de receber por parâmetro 2 números com vírgula. Então imprima na tela uma
    mensagem. Chame a função na main.
    Exemplo: se os valores passados forem 5 e 6. Imprimir: “A soma de 5 e 6 é 11”
*/

#include <stdio.h>

void DecimalSum( float num1 , float num2 )
{
    printf("A soma de %d e %d e %d", num1 , num2 , num1 + num2 );
}

int main(int argc, char const *argv[])
{
    DecimalSum( 5 , 6 );
    return 0;
}

