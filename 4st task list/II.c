/*
    Crie um registro chamado Retângulo. Esse registro deverá conter a largura, altura, a área e perímetro. Faça 
    um programa que leia do usuário (scanf) a largura e altura do retângulo. Então calcule a área e o perímetro 
    do retângulo, armazenando esses valores nos campo do registro. Ao final, mostre todos os valores 
    armazenados no registro.
    ÁREA = LARGURA x ALTURA
    PERÍMETRO= 2 x LARGURA + 2 x ALTURA
*/

#include <stdio.h>

typedef struct
{
    float largura;
    float altura;
    float area;
    float perimetro;
}Retangulo;

void RetCalc( Retangulo* ret )
{
    ret->area = ret->largura * ret->altura;

    ret->perimetro = ret->altura * 2 + ret->largura * 2;
}

int main(int argc, char const *argv[])
{
    Retangulo retangulo;

    RetCalc(&retangulo);

    printf("\n%f - %f - %f - %f", retangulo.largura , retangulo.altura , retangulo.area , retangulo.perimetro );

    return 0;
}




