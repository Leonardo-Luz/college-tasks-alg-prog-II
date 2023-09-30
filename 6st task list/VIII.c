/*
Faça um programa que recebe uma data de forma textual (no formato dd/mm/aaaa). Crie 3 funções para receber
por parâmetro esse texto.
a. A primeira função retorna o dia como um inteiro.
b. A segunda função retorna o mês como um inteiro.
c. A terceira função retorna o ano como um inteiro.
*/


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

char* DataInput( )
{
    char data[TAM];    

    int valid;

    do
    {

        printf("\nDigite uma data (dd/mm/aaaa): ");
        scanf(" %s", data);

        valid = CheckData(data);

        if(valid)
            printf("\nData Valida!");
        else
            printf("\nData Invalida! \nTente Novamente");

    } while (valid);

    return data;
}

int getDay( char* text )
{
    char day[2];

    day[0] = text[0];
    day[1] = text[1];

    return atoi(day);
}

int getMonth( char* text )
{
    char month[2];

    month[0] = text[3];
    month[1] = text[4];

    return atoi(month);
}

int getYear( char* text )
{
    char year[4];

    year[0] = text[6];
    year[1] = text[7];
    year[2] = text[8];
    year[3] = text[9];

    return atoi(year);
}

int main(int argc, char const *argv[])
{
    char data[TAM];    

    strcpy(data , DataInput());

    printf("\ndia: %d", getDay(data));
    printf("\nMes: %d", getMonth(data));
    printf("\nAno: %d", getYear(data));

    return 0;
}
