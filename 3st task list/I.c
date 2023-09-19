/*
    Faça uma função que calcula a Bhaskara. Portanto, a sua função deverá receber como 
    parâmetro os valores reais A,B,C. Após calcular os 2 resultados, retornar esses 2 
    valores por passagem por referência. Portanto, a sua função terá 5 parâmetros: 3 
    passados por valor e 2 por referência.
    Lembre-se que a fórmula de Bhaskara é calculada assim:
    x'  = (-b + raiz(delta)) / 2 * a
    x'' = (-b - raiz(delta)) / 2 * a
    delta = b^2 - 4 * a * c
*/

#include <stdio.h>
#include <math.h>

void BhaskaraCalc( float a , float b , float c , float* x1 , float* x2 )
{
    float delta = (b * b) - (4 * a * c);

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);       
}

int main(int argc, char const *argv[])
{
    float results[2];

    BhaskaraCalc( 4 , 56 , 5 , &results[0] , &results[1]);

    printf("Os resultados da bhaskara e %f e %f \n", results[0] , results[1]);
    return 0;
}
