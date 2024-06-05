#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criarPilha(){// Implementaçao da função para criar pilha
    Pilha *P = (Pilha *)(sizeof(Pilha));
    if (P=NULL) {
        printf("nao foi possivel alocar memoria para a pilha");
        exit(1);
    }
    P->Tamanho = 0;
    P->Topo = NULL;
    return P;
}

Item *criarItem(int C){
    Item *I =(Item *)malloc(sizeof(item));
    if (I==NULL){
        printf("ERRo: Nao foi possivel alocar memoria para o item");
    }
}

void empilhar(Pilha * P, Item *I){
    I->Anterior = P -> Topo;
    P->Topo = I;
    P-> Tamanho++;
}