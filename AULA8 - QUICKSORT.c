#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VERDADEIRO 1
#define FALSO 0

void swap(int *A, int *B); // Trocar dois elementos de lugar
int particao(int V[], int inf, int sup);
void quicksort(int V[], int inf, int sup);
int comparar(int *A, int *B);

int main() {

    system ("cls");
//    int V[] = {3, 6, 4, 5, 1, 7, 2};
        int V[] = {25, 17, 31, 13, 2, 19, 8, 14, 7, 1, 22, 10, 3, 12, 9, 5, 16, 11, 4};

    int N = sizeof(V)/sizeof(int);
    printf("Tamanho: %d\n", N);
    quicksort(V, 0, N - 1);
    for(int i = 0; i < N; i++) printf("%d ", V[i]);
    printf("\n");
    return 0;
}

void swap(int *A, int *B){
    //printf("%d %d %d %d \n", A, B, *A, *B);
    int temp = *A;
    *A = *B;
    *B = temp;
}

int particao(int V[], int inf, int sup){
    int Pivot = V[(inf + sup) / 2];
    int i = inf; // i: índice para percorrer subvetor da esquerda
    int j = sup; // j: índice para percorrer subvetor da direita
    while(i <= j) {
        while (comparar(&V[i], &Pivot) < 0) i++;
        while (comparar(&V[j], &Pivot) > 0) j--;
        if(i <= j) {
            swap(&V[i], &V[j]);
            i++;
            j--;
        }
    }
    return (i); // i é a posição do pivô.
}

void quicksort(int V[], int inf, int sup){
    if (inf < sup) {
        int P = particao(V, inf, sup);
        printf("%d %d\n", P, V[P]);
        quicksort(V, inf, P - 1);
        quicksort(V, P , sup);
    }
}

int comparar(int *A, int *B) {

    return(*A - *B);

}
