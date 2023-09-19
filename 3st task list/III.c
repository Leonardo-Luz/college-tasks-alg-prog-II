/*
    Faça uma função que recebe como parâmetro uma letra e um array de caracteres. A 
    função deverá retornar quantas vezes a letra aparece no array.
*/

#include <stdio.h>
#include <string.h>

int QtyArrayCharRepeat( char letra , char* palavra , int tam )
{
    int count;

    int i;
    for(i = 0; i < tam; i++)
    if(strcmp(palavra[i], letra) == 0)
        count++;   
    

    return count;
}

int main(int argc, char const *argv[])
{
    char palavra = "asddasads";

    printf("Vezes que a se repete: %d \n", QtyArrayCharRepeat( "a" , palavra , 9 ));
    return 0;
}
