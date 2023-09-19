/*
    Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias
    de acordo com o número digitado pelo usuário. Caso o usuário digite um número abaixo de 1 ou acima de 12,
    imprima na tela “mês inválido”
    Exemplo: Entrada = 4. Saída = abril
*/

#include <stdio.h>

void Month( int num )
{
    if(num > 12 || num < 1)
    {
        printf("Mes invalido \n");
        return;
    }

    char months[12][12] = 
    {
        "Janeiro",
        "Fevereiro",
        "Marco",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"
    };

    printf("O mes %d e: %s \n", num , months[num]);
}

int main(int argc, char const *argv[])
{
    Month( 3 );
    return 0;
}
