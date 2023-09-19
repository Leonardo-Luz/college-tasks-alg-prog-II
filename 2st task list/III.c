/*
Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a média dos alunos. 
*/

#include <stdio.h>

float AverageGrade( float* grades , int size )
{
    if(size != 10)
    {
        printf("A quantidade de alunos é diferente de 10\n");
        return;
    }

    float soma = 0;
    
    int i;
    for(i = 0; i < size; i++)
    {
        soma += grades[i];
    }

    return soma / size;
}

int main(int argc, char const *argv[])
{
    float testArray[10] = { 1.1 ,2.2 , 3.3 , 4.6 , 5 , 6 , 7 , 8.53 , 9 , 10 };

    printf("A media das notas e %.3f \n", arrayDeciSum( testArray , 10 ));

    return 0;
}
