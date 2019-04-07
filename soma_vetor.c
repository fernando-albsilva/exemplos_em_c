/* Programa que chama uma funcao que faz a soma de um vetor de 3 elementos, passando o vetor da main por referencia */

#include <stdio.h>
#include <stdlib.h>

// funcao que faz a soma do vetor
int soma_vetor(int *v)
{
    int i=0,soma=0; //i ja foi declarado com valor 0;

    for(;i<3;i++)// i esta omitido por que ja foi inicializado com valor 0;
    {
        soma+=v[i];
    }
    return soma;
}

int main(void)
{
    int v[3];
    int i,resultado;

    for (i = 0; i < 3; i++)
    {

        printf("\n Digite o elemento do vetor %d\n", i);
        scanf("%d", &v[i]);
    }

    resultado=soma_vetor(v);
    printf(" \n A soma do vetor é = %d",resultado);

    return 0;
}