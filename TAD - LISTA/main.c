#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(){
    
    Lista * MinhaLista = criarLista(100);
    Lista * A = criarLista(10);
    Lista * B = criarLista(20);
    Lista * C = criarLista(45);

    // TESTE: Inserindo elementos na lista A
    Item E1 = {5};
    Item E2 = {9};
    Item E3 = {-1};
    Item E4 = {0};
    Item E5 = {2};

    inserirItem(A, E1); //Gerando lista A
    inserirItem(A, E2);
    inserirItem(A, E3);
    inserirItem(A, E4);
    inserirItem(A, E5);

    printf("TESTE 1: calculando o tamanho da lista A: %d\n", A->Tamanho);
    printf("Teste 2: Exibindo lista A: "), exibirLista(A); // Exibe a lista A

    inserirItem(B, E5); // Gera lista B
    inserirItem(B, E4);
    inserirItem(B, E2);
    inserirItem(B, E1);
    inserirItem(B, E3);

    printf("TESTE 3: calculando o tamanho da lista B: %d\n", A->Tamanho);
    printf("Teste 4: Exibindo lista B: "), exibirLista(B); // Exibe a lista B

    printf("TESTE 5: Excluindo elemento da posicao 7 de A: ");// exclui um elemnto da lista A, porem nao é possivel pois so existe 5 elementos
    removerItem (A, 7);


    printf("TESTE 6: Excluindo elemento da posicao 2 de B: ");// exclui um elemnto da lista B
    removerItem (B, 2);
    exibirLista(B);

    printf("TESTE 7: concatenando as lista A e B:");
    contatenarLista


    free(C->Array);
    free(C);
    free(B->Array);
    free(B);
    free(A->Array);
    free(A);

    free(MinhaLista->Array);// liberar memoria  do vetor
    free(MinhaLista); // liberar memoria  da estrutura

    return 0;
}