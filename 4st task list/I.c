/*
    Implemente um programa que leia (SCANF) o nome, o preço e a potência de um carro e armazene esses 
    dados em um registro. Em seguida, imprima na tela os dados contidos no registro.
*/

#include <stdio.h>

typedef struct
{
    char nome[20];
    float preco;
    float potencia;  
}Carro;


void CarroConstructor( Carro* car )
{
    printf("\nDigite o nome do carro: ");
    scanf("%s", &car->nome);

    printf("\nDigite o preco do carro: ");
    scanf("%f", &car->preco);

    printf("\nDigite a potencia do carro: ");
    scanf("%f", &car->potencia);
}

int main(int argc, char const *argv[])
{
    Carro carro;

    CarroConstructor(&carro);

    printf("\n%s - %f - %f", carro.nome , carro.preco , carro.potencia );
    
    return 0;
}

