/*
    Faça uma função capaz de receber por parâmetro 1 número inteiro. A sua função deverá incrementar o
    parâmetro em 1 vez, ou seja, somar 1. A função deverá retornar o novo valor. Chame a função na main.
*/

#include <stdio.h>

int NextNumber( int num )
{
    return num + 1;
}

int main(int argc, char const *argv[])
{
    int num = 5;

    printf("O numero e %d \n", num);

    num = NextNumber( num );

    printf("O novo numero e %d \n", num);

    return 0;
}
