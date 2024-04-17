#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fatorial(int X);

int main() {
    system("cls"); // O cls é para limpar a tela 
    int N, Resultado; 
    scanf("%d", &N);
    Resultado = Fatorial (N);
    if (Resultado != ERRO) printf ("%d! = %d", N , Resultado);
    else printf ("Nao existe fatorial de numero negativo.");
}

int Fatorial (int X) {
    if (X == 0) return (1);
    else if (X > 0) return  (X * Fatorial(X - 1));
    else return (ERRO);
}