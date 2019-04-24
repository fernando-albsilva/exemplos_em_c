#include <stdio.h>
#include <stdlib.h>

struct lista
{
    float info;
    struct lista *prox;
};

typedef struct lista Lista;

Lista *criar_lista_vazia(Lista *);
void tamanho_lista(int *);
Lista *preenche_lista(Lista *, int);
void imprime_lista(Lista *);
Lista *retira_primeiro_elemento(Lista *);
Lista *retira_ultimo_elemento(Lista *);
Lista *esvazia_lista(Lista *);
int main()
{
    Lista *l;
    int n, *p_n = &n;

    l = criar_lista_vazia(l);
    tamanho_lista(p_n);
    l = preenche_lista(l, n);
    imprime_lista(l);
    l = retira_primeiro_elemento(l);
    imprime_lista(l);
    l = retira_ultimo_elemento(l);
    imprime_lista(l);
    l = esvazia_lista(l);

    return 0;
}

Lista *criar_lista_vazia(Lista *l)
{
    return NULL;
}

void tamanho_lista(int *p_n)
{
    printf("\n Digite o tamanho da lista :\n");
    scanf("%d", &*p_n);
}

Lista *preenche_lista(Lista *l, int n)
{
    Lista *inicio, *aux, *aux_2;
    int cont = 1;

    aux = (Lista *)malloc(sizeof(Lista));
    if (aux == NULL)
    {
        printf(" Memoria insuficiente\n");
        exit(1);
    }
    aux->info = (float)cont;
    aux->prox = NULL;
    l = aux;
    aux_2 = aux;
    aux = aux->prox;

    cont++;

    while (cont <= n)
    {
        aux = (Lista *)malloc(sizeof(Lista));
        if (aux == NULL)
        {
            printf(" Memoria insuficiente\n");
            exit(1);
        }
        aux_2->prox = aux;
        aux_2 = aux;
        aux->info = (float)cont;
        aux->prox = NULL;
        aux = aux->prox;
        cont++;
    }

    return l;
}

void imprime_lista(Lista *l)
{
    int cont = 1;
    printf("\n---------------------------INICIO----------------------\n");
    if (l == NULL)
    {
        printf("\n Lista vazia : \n");
    }
    else
    {
        while (l != NULL)
        {
            printf("\n nó numero : %d  elemento info = %f\n", cont, l->info);
            l = l->prox;
            cont++;
        }
        printf("\n---------------------------FIM-------------------------\n");
    }
}

Lista *retira_primeiro_elemento(Lista *l)
{
    Lista *aux = l;

    l = l->prox;
    free(aux);
    return l;
}

Lista *retira_ultimo_elemento(Lista *l)
{
    Lista *aux = l, *inicio = l;
    if (l->prox == NULL)
    {
        aux = l;
        free(l);
        aux = NULL;
        return aux;
    }
    else
    {

        while (l != NULL)
        {

            if (l->prox == NULL)
            {

                free(l);
                aux->prox = NULL;

                return inicio;
            }
            aux = l;
            l = l->prox;
        }
        return inicio;
    }
}
Lista *esvazia_lista(Lista *l)
{
    while (l != NULL)
    {
        free(l);
        l = l->prox;
    }

    return l;
}