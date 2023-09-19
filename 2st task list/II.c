/*
    Escreva uma função que receba um array de 10 valores com vírgula e retorne a sua soma.
*/

#include <stdio.h>

float arrayDeciSum( float* num , int size )
{
    if(size != 10)
    {
        printf("O tamanho da array é diferente de 10\n");
        return;
    }

    float soma = 0;
    
    int i;
    for(i = 0; i < size; i++)
    {
        soma += num[i];
    }

    return soma;
}

int main(int argc, char const *argv[])
{
    float testArray[10] = { 1.1 ,2.2 , 3.3 , 4.6 , 5 , 6 , 7 , 8.53 , 9 , 10 };

    printf("A soma da array e %.3f \n", arrayDeciSum( testArray , 10 ));

    return 0;
}

