#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ConcatenarString(char * Ressultado, char *A, char*B);
    
    void main () {
        char A[128];
        char B[128];
        char Resultado[256];

        gets(A);
        gets(B);
        ConcatenarString(Resultado, A, B);
        puts(Resultado);

    }

void ConcatenarString(char *Resultado, char *A, char *B){
    
    Resultado[Posicao] = '\0';

}