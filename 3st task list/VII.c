/*
    Faça uma função que recebe um array de inteiros. Considere que os valores no array 
    estarão entre 0 e 9. Calcule a mediana e a moda dos valores do array. Retorne a 
    mediana e moda.
*/

#include <stdio.h>
#include <math.h>

void Calc( int* array , int tam , float* mediana , int* moda)
{
    *mediana = 0;
    *moda = 0;

    int i;

    if(tam % 2 == 0)
        *mediana = (array[tam/2] + array[(tam/2)+1]) / 2;

    else
        *mediana = array[tam/2];

    int j;

    int count = 0;
    int countTemp = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; i < tam; i++)
        {
            if(array[i] == array[j])
            {
                count ++;
            } 
        }

        if(count > countTemp)
        {
            *moda = array[i];

            countTemp = count;
            count = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[6] = { 1 , 2 , 4 , 3 , 4 , 5};
    float mediana;
    int moda; 

    Calc( array , 6 , &mediana , &moda );

    printf("A mediana e a moda da array sao respectivamentes %f e %d. \n", mediana , moda);

    return 0;
}
