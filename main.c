#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main(){

    printf("teste01: criando fila vazia!\n");
    Fila * MinhaFila = criarFila();
    printf("Tamanho: %d\n", MinhaFila -> Tamanho);
    printf("\n");

    Item *E1 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 43;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E1);
    
    Item *E2 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 17;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E2);

    Item *E3 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 4;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E3);
    
    Item *E4 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 47;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E4);

    Item *E5 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 53;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E5);

    Item *E6 = (Item *)malloc(sizeof(Item));
    E1-> Chave = 61;
    E1-> Proximo = NULL;
    enfileirar(MinhaFila, E6);

    printf("Tamanho: %d\n", MinhaFila->Tamanho);
    
}