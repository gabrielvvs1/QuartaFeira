#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

Fila * criarFila(){ // IMPLEMTACAO DA FUNCAO
    Fila * F = (Fila * ) malloc(sizeof(Fila));
    if (F == NULL){
        printf("ERRO: Nao foi possivel alocar memoria para a Fila!\n");
    }
    F -> Inicio = NULL;
    F -> Fim = NULL;
    F -> Tamanho = 0;
    return F;



    void enfileirar(Fila *F, Item * Elemento){
        if (Elemento == NULL){
            printf("Erro: não eh possivel inserir elemento nulo!\n");
            return;
        }

        if(F -> Tamanho == 0){ //Inserindo elemento em lista vazia
            F->Inicio = Elemento;
            F->Fim = Elemento;
        }
        else{ //A lista nao esta vazia
            F -> Fim->Proximo = Elemento;
            F -> Fim = Elemento;
        }

        F->Tamanho++;
    }
    
}