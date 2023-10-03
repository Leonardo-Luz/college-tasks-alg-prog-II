#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>

// modifique a assinatura dessa funcao de acordo com o enunciado da questao, 
// mas nao mude os nomes das funcoes

// QUESTAO 1
float CalculaMedia(float a, float b)
{
	return (a + b) / 2;
}

// QUESTAO 2
int SomarArray(int* array, int tam)
{
	int soma = 0;

    int i;
    for(i = 0; i < tam; i++)
    {
        soma += array[i];
    }

    return soma;
}

// QUESTAO 3
void ProximosValores(int valor1, int* valor2, int* valor3)
{
    *valor2 = *valor3 = 0;

    *valor2 = valor1 + 1;
    *valor3 = valor2 + 1;
}

// QUESTAO 4
typedef struct {
	float largura;
	float altura;
	float area;
	float perimetro;
} Retangulo;

Retangulo CriaRetangulo(float largura, float altura)
{
    Retangulo ret;

    ret.largura = largura;
    ret.altura = altura;

    ret.area = altura * largura;
    ret.perimetro = (altura * 2) + (largura * 2);

    return ret;
}

//QUESTAO 5
void ModificaRetangulo(Retangulo* ret)
{
	ret->area = ret->altura * ret->largura;
    ret->perimetro = (ret->altura * 2) + (ret->largura * 2); 
}

//QUESTAO 6
int SomaAreas(Retangulo* ret, int tam)
{
	int soma = 0;
    
    int i;

    for(i = 0; i < tam; i++)
    {
        soma += ret[i].area;
    }

    return soma;
}




int main(int argc, char *argv[]) {
	// NAO MODIFIQUE A MAIN
//	printf("\n----- corrigindo Q1:");
	float q1 = 0;
	float esperado = 1.5;


	float r = CalculaMedia(1,2);
	esperado = 1.5;
	if (abs(r-esperado)<0.01)
		q1 += 0.5;		
		
	r = CalculaMedia(1.5,3.5);
	esperado = 2.5;
	if (abs(r-esperado)<0.01)
		q1 += 0.5;
	printf("\n Questao 1 - nota: %.1f", q1*10);
	
//	printf("\n----- corrigindo Q2:");
	float q2 = 0;
	int array[5] = {1,2,3,4,5};
	int r2 = SomarArray(array, 5);
	esperado = 15;
	
	if (abs(r2-esperado)<0.01)
		q2 += 0.5;
		
	int array2[10] = {1,2,3,4,5,-100,20,9,90,10};
	r2 = SomarArray(array2, 10);
	esperado = 44;
	if (abs(r2-esperado)<0.01)
		q2 += 0.5;
	printf("\n Questao 2 - nota: %.1f", q2*10);
	
//	printf("\n----- corrigindo Q3:");
	float q3 = 0;
	int r3a, r3b;
	ProximosValores(2, &r3a, &r3b);
	esperado = 3;
	int esperado2 = 4;
	if (esperado == r3a)
		q3+=0.25;
	if (esperado2 == r3b)
		q3+=0.25;
		
	ProximosValores(-5, &r3a, &r3b);
	esperado = -4;
	esperado2 = -3;
	if (esperado == r3a)
		q3+=0.25;
	if (esperado2 == r3b)
		q3+=0.25;
	
	printf("\n Questao 3 - nota: %.1f", q3*10);
	
//	printf("\n----- corrigindo Questao 4:");
	float q4 = 0;
	Retangulo ret = CriaRetangulo(2.5, 3.5);
	esperado = 2.5*3.5;
	esperado2 = 12;
	if (abs(ret.area-esperado)<0.01)
		q4+=0.25;
	if (abs(ret.perimetro-esperado2)<0.01)
		q4+=0.25;
		
	
	ret = CriaRetangulo(3, 4);
	esperado = 12;
	esperado2 = 14;
	if (abs(ret.area-esperado)<0.01)
		q4+=0.25;
	if (abs(ret.perimetro-esperado2)<0.01)
		q4+=0.25;
	
	printf("\n Questao 4 - nota: %.1f", q4*10);
	
//	printf("\n----- corrigindo Questao 5:");
	float q5 = 0;
	Retangulo ret2;
	ret2.largura = 2.5;
	ret2.altura = 3.5;
	ret2.area = 0;
	ret2.perimetro = 0;
	ModificaRetangulo(&ret2);
	esperado = 2.5*3.5;
	esperado2 = 12;
	
	if (abs(ret2.area-esperado)<0.01)
		q5+=0.25;
	if (abs(ret2.perimetro-esperado2)<0.01)
		q5+=0.25;
		
		
	Retangulo ret3;
	ret3.largura = 3;
	ret3.altura = 4;
	ret3.area = 0;
	ret3.perimetro = 0;
	ModificaRetangulo(&ret3);
	esperado = 12;
	esperado2 = 14;
	if (abs(ret3.area-esperado)<0.01)
		q5+=0.25;
	if (abs(ret3.perimetro-esperado2)<0.01)
		q5+=0.25;
		
	
	printf("\n Questao 5 - nota: %.1f", q5*10);
	
	
	//	printf("\n----- corrigindo Questao 5:");
	float q6 = 0;
	Retangulo arrayRet[5];
	int i;
	esperado = 0;
	for (i = 0; i < 5; i++)
	{
		arrayRet[i].largura = 2.2*i;
		arrayRet[i].altura = 3.1*i;
		arrayRet[i].area = arrayRet[i].largura * arrayRet[i].altura;
		arrayRet[i].perimetro = 0;
		esperado += arrayRet[i].area;
	}
	r = SomaAreas(arrayRet, 5);
	
	if (abs(r-esperado)<0.01)
		q6+=0.5;
		
		
	Retangulo arrayRet2[7];
	esperado = 0;
	for (i = 0; i < 7; i++)
	{
		arrayRet2[i].largura = 2.2*i;
		arrayRet2[i].altura = 3.1*i;
		arrayRet2[i].area = arrayRet[i].largura * arrayRet[i].altura;
		arrayRet2[i].perimetro = 0;
		esperado += arrayRet2[i].area;
	}
	r = SomaAreas(arrayRet2, 7);
	
	if (abs(r-esperado)<0.01)
		q6+=0.5;
		
	
	printf("\n Questao 6 - nota: %.1f", q6*10);


	
	
	
	
	return 0;
}
