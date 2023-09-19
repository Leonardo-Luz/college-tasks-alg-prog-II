/*
    Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida
    em graus Celsius. A fórmula de conversão é: C = (Fahrenheit – 32) * (5.0/9.0), sendo F a temperatura em
    Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

float CelsiusCovert( float Fahrenheit )
{
    return ((Fahrenheit - 32) * (5 / 9));
}

int main(int argc, char const *argv[])
{
    printf("%f Celsius e igual a %f Fahrenheit \n", 5 , CelsiusCovert(5));
    return 0;
}
