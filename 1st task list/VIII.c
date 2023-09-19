/*
    Escreva uma função que receba por parâmetro dois números e retorne a multiplicação desses números, ou seja,
    o primeiro parâmetro multiplicado pelo segundo parâmetro. Chame a função na main
*/

#include <stdio.h>

float Mult( float num1 , float num2 )
{
    return num1 * num2;
}

int main(int argc, char const *argv[])
{
    float num1 = 3.5;
    float num2 = 7.7;

    float result = Mult( num1 , num2 );

    printf("Os numeros %f e %f multiplicados resultam em %f \n", num1 , num2 , result );
    
    return 0;
}
