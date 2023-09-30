/*
Faça um programa que recebe uma data de forma textual. Então crie uma função que verifica se a data está no
formato dd/mm/aaaa (exemplo 14/09/2021).
*/


#include <string.h>
#include <stdio.h>

#define TAM 10


int CheckData( char* text )
{
    if(strlen(text) != 10)
        return 0;

    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if((i == 2 || i == 5) && text[i] != "/")
            return 0;
        else if(i == 0 && (text[i] != "0" || text[i] != "1" || text[i] != "2" || text[i] != "3"))
            return 0;
        else if(i == 3 && (text[i] != "0" || text[i] != "1"))
            return 0;
        else if(i == 4 && (text[i] != "0" || text[i] != "1" || text[i] != "2"))
            return 0; 
    }    

    return 1;
}

int main(int argc, char const *argv[])
{
    char data[TAM];    

    printf("\nDigite uma data (dd/mm/aaaa): ");
    scanf(" %s", data);

    if(CheckData(data))
        printf("\nData Valida!");
    else
        printf("\nData Invalida!");

    return 0;
}
