#include <stdio.h>
#include <stdlib.h>


void ordena(float *,int n);

int main()
{
	
	int tamanho,i;
	float *v;
	Printf(" \nDigite o tamanho do vetor");
	scanf("%d",&tamanho);
	
	v=(float*)malloc(tamanho*sizeof(float));
	
	for(i=0; i < tamanho; i++)
	{
		printf("\n Digite v[%d] = ",i);
		scanf("%f",&v[i]);
		
	}
	
	ordena(v,tamanho);
	
	printf("vetor ordenado");
	
	for(i=0; i < tamanho; i++)
		{printf("\n  v[%d] = ",i);}
		
	return 1;	
	
	
}

void ordena(float *v,int n)
{
	int i,troca=1,f;
	float aux;
	
	while( troca == 1)
	{
		f = f-1;
		troca=0;
		for (i=0;i<=f;i++)
			if(v[i] > v[i+1] )
			{
				aux= v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				troca=1;
				
			}
	}
	
		
	
	
}
