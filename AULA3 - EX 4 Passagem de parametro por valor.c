#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibirArray(int Array[], int tamanho);
void modificarVetor(int *P, int tamanho);

void main() {
    system ("cls");
    int V[] = {7, 3, 1, 9, 6};
    int tamanho = sizeof(V) / sizeof(int); // sizeof utilizado para calcular o numero de bytes reservados
    exibirArray(V, tamanho);
    modificarVetor(V, tamanho);
    exibirArray(V, tamanho);

}

void exibirArray(int Array[], int tamanho){
    for (int i=0; i < tamanho; i++) printf("%d\t", Array[i]); // o "\t" é para aumentar o tamnho do espaço"
    printf("\n");
}

void modificarVetor(int *P, int tamanho){
   // obs: P é o endereço de memoria
   for(int i = 0; i < tamanho; i++) P [i] = P [i] + 12;

}