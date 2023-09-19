/*
    Escreva uma função para o cálculo do volume e área de uma esfera

    𝑉 = 4 π 𝑟^3 / 3
    𝐴 = 4 π 𝑟^2

    em que 𝜋 = 3.141592. O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser
    retornados por referência.
*/

void SphereCalc( float radius , float* volumn , float* area )
{
    *volumn = (4 * 3.141592 * ( radius * radius * radius )) / 3;
    *area = 4 * 3.141592 * ( radius * radius );
}

int main(int argc, char const *argv[])
{
    float volumn , area;
    float raio = 4;
    SphereCalc( raio , &volumn , &area );

    printf("O volume e o raio de uma esfera de raio %f sao respectivamente %f e %f \n", raio , volumn , area );

    return 0;
}
