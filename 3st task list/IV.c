/*
    Faça uma função que recebe como parâmetro um array de caracteres. Essa função 
    deverá contar quantas vogais existem no array
*/

#include <stdio.h>
#include <string.h>

int QtyArrayVowelRepeat( char* palavra , int tam )
{
    char vogais[5][1] = { "a" , "e" , "i" , "o" , "u" };

    int count;

    int i , j;
    for(i = 0; i < tam; i++)
    for(j = 0; j < 5; j++)
    if(strcmp(strlwr(palavra[i]), vogais[j]) == 0)
        count++;
    
    return count;
}

int main(int argc, char const *argv[])
{
    char palavra = "asddasads";

    printf("Quantas vogais tem a palavra: %d \n", QtyArrayVowelRepeat( palavra , 9 ));
    return 0;
}
