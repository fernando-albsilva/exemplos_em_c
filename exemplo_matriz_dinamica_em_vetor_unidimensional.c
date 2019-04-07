#include <stdio.h>
#include <stdlib.h>


void read_mat_size(int*,int*);
void aloc_mat(int *,int *,int *);
void read_mat(int*,int *, int *);
void print_mat(int*,int*,int*);
void search_mat(int*,int*,int*);


int main()
{
    int total_linha,total_coluna;
    int *p_linha,*p_coluna,*mat;

    p_linha=&total_linha;
    p_coluna=&total_coluna;
    
    read_mat_size(p_linha,p_coluna);
    aloc_mat(p_linha,p_coluna,mat);
    read_mat(p_linha,p_coluna,mat);
    print_mat(p_linha,p_coluna,mat);
    search_mat(p_linha,p_coluna,mat);
   
    return 1;

}

void read_mat_size(int* p_linha, int* p_coluna)
{
    

    printf("\nDigite o total de linhas da matriz:\n");
    scanf("%d",p_linha);
    printf(" \n Digite o total de colunas da matriz: \n");
    scanf("%d",p_coluna);

}

void aloc_mat(int * p_linha, int * p_coluna, int *mat)
{
  
    mat=(int*)malloc((*p_linha)*(*p_coluna)*sizeof(int));
    if (mat == NULL)
    {
      printf("\nmemória insuficiente");
      
      free(mat);
    }
}
void read_mat(int* p_linha,int* p_coluna,int *mat)
{
    int i,j;
    for(i=0;i<*p_linha;i++)
    {
        for(j=0;j<*p_coluna;j++)
        {
            printf(" \n Digite mat[%d][%d] = ",i,j);
            scanf("%d",&mat[i*(*p_coluna)+j]);
        }
    }
}
void print_mat(int *p_linha, int *p_coluna,int *mat)
{
    int i,j;

    for(i=0;i<*p_linha;i++)
    {
        for(j=0;j<*p_linha;j++)
        {
            printf("%6d",mat[i*(*p_coluna)+j]);
        }
        printf("\n");
    }
}

void search_mat(int* p_linha,int* p_coluna,int *mat)
{
    int i,j,busca,teste=0;

    
    printf("\n Digite o numero a ser buscado na matriz");
    scanf("%d",&busca);

    for(i=0;i<*p_linha;i++)
    {
        for(j=0;j<*p_linha;j++)
        {
            if(busca==mat[i*(*p_coluna+j)])
            {
                printf("\n O valor %d se econtra na posicão mat[%d][%d] dda matriz \n",busca,i,j);
                teste=1;
                break;
            }
        }
    }
    if(teste==0)
    {
        printf(" \n O valor buscado nao se encontra na matriz\n");
    }
}
