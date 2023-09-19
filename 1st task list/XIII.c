/*
    Escreva uma função que receba por parâmetro os valores de A, B, C. A função deverá retornar a soma dos
    parâmetros
*/

#include <stdio.h>

float tripleSum( float a , float b , float c )
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    printf("Os numeros %f , %f e %f somados resultam em %f \n", 3.4 , 6 , 99 , tripleSum( 3.4 , 6 , 99 ));
    return 0;
}
