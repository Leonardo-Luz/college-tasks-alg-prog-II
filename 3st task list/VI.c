/*
    Faça uma função que recebe um array de floats. Calcule a média e o desvio padrão dos
    valores do array. Retorne a média e o desvio padrão
*/

#include <stdio.h>
#include <math.h>

void Calc( float* array , int tam , float* media , float* desvio )
{
    *media = 0;
    *desvio = 0;
    int i;
    for(i = 0; i < tam; i++)
    {
        *media += array[i];
    }

    *media /= tam;

    for(i = 0; i < tam; i++)
    {
        *desvio += (array[i] - *media) * (array[i] - *media);
    }

    *desvio = sqrt( *desvio / tam );
}

int main(int argc, char const *argv[])
{
    float array[6] = { 1 , 2.6 , 4 , 3 , 4 , 5};
    float media;
    float desvio; 

    Calc( array , 6 , &media , &desvio );

    printf("A media e o desvio da array sao respectivamentes %f e %d. \n", media , desvio);

    return 0;
}

