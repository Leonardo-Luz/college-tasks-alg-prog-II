/*
    Faça uma função capaz de receber por parâmetro 1 número inteiro. A sua função deverá multiplicar o
    parâmetro por 2. A função deverá retornar o novo valor. Chame a função na main.
*/

#include <stdio.h>

int NumMult ( int num )
{
    return num * 2;
}

int main(int argc, char const *argv[])
{
    int num = 5;

    printf("O numero e %d \n", num);

    num = NumMult( num );

    printf("O novo numero e %d \n", num);

    return 0;
}

