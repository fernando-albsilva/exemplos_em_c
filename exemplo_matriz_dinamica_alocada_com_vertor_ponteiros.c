#include <stdio.h>
#include <stdlib.h>


void read_mat_size(int*,int*);
void aloc_mat(int*,int*,int**,int*);
//void read_mat(int*,int*,int**);

int main()
{
    int linha,coluna;
    int *p_linha,*p_coluna,**mat_p,*mat;
    int i,j;
    p_linha=&linha;
    p_coluna=&coluna;


    read_mat_size(p_linha,p_coluna);
    aloc_mat(p_linha,p_coluna,mat_p,mat);
    
    //read_mat(p_linha,p_coluna,mat);
for (i=0; i<(*p_linha); i++)
    {
       
            printf("%d",mat[i]);
            
        
    }
    
    return 0;
}

void read_mat_size(int*p_linha,int *p_coluna)
{
    printf("\n Digite o total de linhas da matriz :");
    scanf("%d",p_linha);
    printf("\n Digite o tamanho de colunas da matriz :");
    scanf("%d",p_coluna);

    //mat=(int**)malloc((*p_linha)*sizeof(int*);



}
void aloc_mat(int* p_linha, int* p_coluna, int **mat_p,int *mat)
{
    int i,j;
    mat_p=(int **)malloc((*p_linha)*sizeof(int *));
    mat=(int *)malloc((*p_coluna) * sizeof(int) );
        for (i=0;i<(*p_linha);i++)
        {
            mat_p[i]=mat;
        }
        
  for (i=0; i<(*p_linha); i++)
    {
        for(j=0; j<(*p_coluna); j++)
        {
            printf("\n Digite mat[%d][%d] =",i,j);
            scanf("%d",&mat[i]);
        }
    }
}



/*void read_mat(int *p_linha,int*p_coluna,int **mat)
{
    int i,j;
    for (i=0; i<(*p_linha); i++)
    {
        for(j=0; j<(*p_coluna); j++)
        {
            printf("\n Digite mat[%d][%d] =",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

}
*/