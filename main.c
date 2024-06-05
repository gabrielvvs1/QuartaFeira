#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *X = criarPilha();

    printf("Teste1: Criando Pilha vazia!\n");
    printf("Tamanho:%d\n", X->Tamanho);
    printf("\n");

    Item *I1 = criarItem(13);

    printf("Teste 2: criando item!\n");
    printf("Tamanho: %d \n", I1->Chave);
    printf("\n");

    empilhar(X, I1);

    printf("Teste 3: Empilhando I1!\n");
    printf("Tamanho: %d \n", I1->Chave);
    printf("\n");

}