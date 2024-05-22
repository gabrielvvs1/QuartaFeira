#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int Chave;
} Item;

typedef struct Lista {
    int Capacidade;
    int Tamanho;
    Item *Array;
}Lista;

Lista *criarLista(int Capacidade);

void inserirItem(Lista *L, Item Elemento);// funcao que inseri item na lista
void removeItem(Lista *L, int Posicao);
void exibirLista(Lista *L);
void contatenarLista(Lista *C, Lista *A, Lista *B);


#endif