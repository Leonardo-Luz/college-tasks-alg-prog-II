/*
    Faça uma função que recebe um array de floats. Então a função deverá multiplicar 
    todos os valores por 10. Após chamar a função, imprima os arrays na tela.
*/

#include <stdio.h>

void MultTenArray( float** array , int tam )
{
    int i;

    for(i = 0; i < tam; i++)
    {
        *array[i] *= 10;
    }
}

int main(int argc, char const *argv[])
{
    float array[3] = { 3.5 , 54 , 5.55 };

    printf("array : %f , %f , %f ", array[0] , array[1] , array[2]);

    MultTenArray(&array , 3);

    printf("array : %f , %f , %f ", array[0] , array[1] , array[2]);
    return 0;
}
