#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//algoritmo Quicksort

#define VERDADEIRO 1
#define FALSO 0

void swap(int *A, int *B); // para trocar 2 elementos de lugar
int particao(int V[], int inf, int sup);
void quicksort(int V[], int inf, int sup);

int main (){
    system ("cls");
    int V[] = {3, 6, 4, 5, 1, 7, 2};
    int N = sizeof(V)/sizeof(int);
    quicksort(V, 0 , N -1);
    for(int i=0; i<N; i++) printf("%d",V[i]);
    printf("\n");

    return 0;
}


void swap(int *A, int *B){
   // printf("%d %d %d %d\n", A, B, *A, *B);
    int temp = *A;
    *A = *B;
    *B = temp;

}

int particao(int V[], int inf, int sup){
    int Pivot = V[(inf + sup) / 2];
    int i = inf; // i: indice para percorrer subvetor da esquerda.
    int j =sup; // j: indice para percorrer subvetor da direita.
    while(i <= j) {
        while (V[i] < Pivot) i++;
        while (V[j] > Pivot) j--;
        if(i <= j){
            swap(&V[i], &V[j]);
            i++;
            j--;
        }
    }
    return (i); // i é a posicao do pivô
}

void quicksort(int V[], int inf, int sup){
    if(inf < sup){
        int P = particao(V, inf, sup);
        quicksort(V, inf, P - 1);
        quicksort(V, P + 1, sup);

    }
}