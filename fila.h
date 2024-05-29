#ifndef FILA_H
#define FILA_H

typedef struct Item{ // estrutara do i  tem da fila
    int Chave;
    struct Item* Proximo;
}Item;

typedef struct Fila{ // estrutura da fila
    Item * Inicio;
    Item * Fim;
    int Tamanho;
}Fila;

Fila * criarFila();

void enfileirar(Fila *F, Item * Elemento);



#endif