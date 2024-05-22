#include <stdio.h>
#include <stdlib.h>

//Funcao que gera uma lista
#include "lista.h"

Lista *criarLista(int Capacidade) {

    Lista *L = (Lista *) malloc(sizeof(Lista));
    if(L==NULL){
        printf("Erro na alocacao de memoria para a estrutura da lista!\n");
        exit(1);
    }

    L->Array = (Item *) malloc(Capacidade*sizeof(Item));
    if (L->Array == NULL) {
        printf("Erro na alocacao de memoria do vetor de itens!\n");
        free(L);
        exit(1);
    }

    L->Tamanho = 0;
    L->Capacidade = Capacidade;
    return L ;
}

void inserirItem(Lista *L, Item Elemento){ // Funcao que inseri o elemento na lista
    if(L->Tamanho >= L->Capacidade){
        printf("Erro: A lista esta cheia!\n");
        return;
    }
    L ->Array[L->Tamanho] = Elemento;
    L-> Tamanho++;

}

void exibirLista(Lista *L){
    for (int i = 0; i < L->Tamanho; i++) printf("%d", L ->Array[i].Chave);
}

void removeItem(Lista *L, int Posicao){
    if (Posicao< 0 || Posicao >= L->Tamanho){
        printf("ERRO: Posicao fora dos limites da lista!\n");
        return;
    }
    for (int i = Posicao; i < L-> Tamanho; i++) L-> Array[i] = L->Array[i+1];
    L->Tamanho--;
}

void contatenarLista(Lista *C, Lista *A, Lista *B){
    for(int i = 0; i < A->Tamanho; i++) C->Array[i] = A-> Array[i];
    int t = A->Tamanho;
    for(int i = 0; i< B->Tamanho; i++) C-> Array[ t+i ] = B->Array[i];
    C->Tamanho = A ->Tamanho + B-> Tamanho;

}