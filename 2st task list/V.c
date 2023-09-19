/*
    Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do
    vetor e o número de vezes que esse elemento ocorreu no vetor.
*/

#include <stdio.h>

void BiggestArrayNum( float* nums , int size , float* biggest , int* count)
{
    *biggest = nums[0];

    *count = 0;

    int i;

    for (i = 1; i < size; i++)
    if(nums[i] > *biggest)
    {
        *biggest = nums[i];
    }

    for (i = 1; i < size; i++)
    if(nums[i] == *biggest)
    {
        *count ++;
    }
}

int main(int argc, char const *argv[])
{
    float arrayTest[3] = { 3 , 5.45 , 88 };
    float big;
    int count;

    BiggestArrayNum(arrayTest , 3 , &big , &count);

    printf("O maior numero da array e %f e a quantidades de vezes que aparece e %d", big , count);

    return 0;
}
