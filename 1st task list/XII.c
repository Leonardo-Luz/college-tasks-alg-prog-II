/*
    Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse
    cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
    𝑉 = 𝜋 ∗ 𝑟𝑎𝑖𝑜^2 ∗ 𝑎𝑙𝑡𝑢𝑟𝑎
*/

#include <stdio.h>

float CilinderVolum( float altura , float raio )
{
    return 3.14159 * ( raio * raio ) * altura;
}

int main(int argc, char const *argv[])
{
    printf("O volume do cilindo de altura %f e raio %f e %f \n", 6 , 7.7 , CilinderVolum( 6 , 7.7 ));
    return 0;
}
