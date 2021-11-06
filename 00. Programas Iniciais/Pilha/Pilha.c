#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct
{
    int* vetor[TAM];
    int qnt;
} Pilha;

void construtora(Pilha *p);
bool vazia(Pilha *p);
void inserir(Pilha *p, int elemento);
void remover(Pilha *p);
void imprimir(Pilha *p);
int qntidadesdeelementos(Pilha *p);

int main()
{
    Pilha pilha;

    construtora(&pilha);

    inserir(&pilha, 1);
    inserir(&pilha, 3);
    inserir(&pilha, 5);

    remover(&pilha);

    inserir(&pilha, 4);
    remover(&pilha);
    remover(&pilha);
    remover(&pilha);

    if(vazia(&pilha) == true)
        printf("Pilha esta vazia\n");
    else
        printf("Pilha tem elementos\n");

    imprimir(&pilha);

    return 0;
}

void construtora(Pilha *p)
{
    p->qnt = -1;
    for(int i=0 ;i<TAM; i++)
    {
        p->vetor[i] = NULL;
    }
}

bool vazia(Pilha *p)
{
    if(p->qnt < 0)
        return true;
    else
        return false;
}

void inserir(Pilha *p, int elemento)
{
    if(p->qnt < TAM - 1)
    {
        p->qnt++;
        p->vetor[p->qnt] = (int *) malloc(sizeof(int));
        *(p->vetor[p->qnt]) = elemento;
        elemento;
    }   
    else
    {
        printf("Pilha Cheia, nao foi possivel colocar o elemento\n");
    }
}

void remover(Pilha *p)
{
    if(vazia(p) == true)
    {
        printf("Pilha vazia, nao foi possivel remover!");
    }
    else
    {
        free(p->vetor[p->qnt]);
        p->vetor[p->qnt] = NULL;
        p->qnt--;
    }
}

void imprimir(Pilha *p)
{
    for(int i = p->qnt; i>=0; i--)
    {
        printf("%d\n", *p->vetor[i]);
    }
}

int qntidadesdeelementos(Pilha *p)
{
    return p->qnt + 1;
}