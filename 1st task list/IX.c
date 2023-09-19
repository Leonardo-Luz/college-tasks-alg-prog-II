/*
    Escreva uma função que receba por parâmetro dois números e retorne o maior deles. Chame a função na main.
*/

#include <stdio.h>

float BiggestNum( float num1 , float num2 )
{
    if( num1 >= num2 ) 
        return num1;

    return num2;
}

int main(int argc, char const *argv[])
{
    printf("O maior numero entre %f e %f : %f \n" , 6.7 , 9 , BiggestNum( 6.7 , 9 ));
    return 0;
}
