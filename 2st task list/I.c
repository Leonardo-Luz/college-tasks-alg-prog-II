/*
    Escreva uma função que receba um array de 10 valores inteiros e retorne a sua soma.
*/

#include <stdio.h>

int arraySum( int* num , int size )
{
    if(size != 10)
    {
        printf("O tamanho da array é diferente de 10\n");
        return;
    }

    int soma = 0;
    
    int i;
    for(i = 0; i < size; i++)
    {
        soma += num[i];
    }

    return soma;
}

int main(int argc, char const *argv[])
{
    int testArray[10] = { 1 ,2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

    printf("A soma da array e %d \n", arraySum( testArray , 10 ));

    return 0;
}
