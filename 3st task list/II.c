/*
    Faça uma função que irá interagir com o usuário. Ela deverá imprimir um menu 
    conforme abaixo. Então a sua função irá solicitar a opção que o usuário irá escolher. 
    Repita o menu até o usuário digitar uma opção válida. Assim que o usuário digitar uma 
    opção válida, retorne o valor inteiro escolhido pelo usuário.
    MENU:
    0 – Sair
    1 – Listar
    2 – Cadastrar
    3 – Excluir
    4 - Pesquisar
*/

#include <stdio.h>

void Menu()
{
    printf("\nMENU:");
    printf("\n0 - Sair");
    printf("\n1 - Listar");
    printf("\n2 - Cadastrar");
    printf("\n3 - Excluir");
    printf("\n4 - Pesquisar");
    printf("\n-> ");
}

int InputReturn()
{
    int cases;

    do
    {
        Menu();
        scanf("%d", &cases);

        switch (cases)
        {
        case 1:        
            return cases;

        case 2:        
            return cases;

        case 3:        
            return cases;

        case 4:        
            return cases;
        }
    } while (cases);
    
}

int main(int argc, char const *argv[])
{
    int num = InputReturn();
    
    printf("Digitou o numero %d \n", num);

    return 0;
}
