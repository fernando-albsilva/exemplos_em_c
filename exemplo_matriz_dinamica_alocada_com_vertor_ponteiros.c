#include <stdio.h>
#include <stdlib.h>

void read_mat_size(int *, int *);
int **aloc_mat(int **, int, int);
void read_mat(int *, int *, int **);
void print_mat(int *, int *, int **);
int main()
{
    int linha, coluna;
    int *p_linha, *p_coluna, **mat_p;
    int i, j;
    p_linha = &linha;
    p_coluna = &coluna;

    read_mat_size(p_linha, p_coluna);
    mat_p = aloc_mat(mat_p, linha, coluna);
    printf("%d - %d", linha, coluna);
    read_mat(p_linha, p_coluna, mat_p);
    print_mat(p_linha, p_coluna, mat_p);

    return 0;
}

void read_mat_size(int *p_linha, int *p_coluna)
{
    printf("\n Digite o total de linhas da matriz :");
    scanf("%d", p_linha);
    printf("\n Digite o tamanho de colunas da matriz :");
    scanf("%d", p_coluna);
}
int **aloc_mat(int **mat_p, int linha, int coluna)
{
    int i;

    mat_p = (int **)malloc(linha * sizeof(int *));
    if (mat_p == NULL)
    {
        printf("\n Nao há memoria suficiente \n");
        free(mat_p);
        return 0;
    }
    for (i = 0; i < linha; i++)
    {
        mat_p[i] = (int *)malloc(coluna * sizeof(int));
        if (mat_p[i] == NULL)
        {
            printf("\n Nao há memoria suficiente \n");
            free(mat_p[i]);
            return 0;
        }
    }
    return mat_p;
}   

void read_mat(int *p_linha, int *p_coluna, int **mat)
{
    int i, j;
    for (i = 0; i < (*p_linha); i++)
    {
        for (j = 0; j < (*p_coluna); j++)
        {
            printf("\n Digite mat[%d][%d] =", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_mat(int *p_linha, int *p_coluna, int **mat)
{
    int i, j;

    for (i = 0; i < (*p_linha); i++)
    {
        for (j = 0; j < (*p_coluna); j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}