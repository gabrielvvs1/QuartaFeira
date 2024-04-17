#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fib(int X);

int main() {
    system("cls"); // O cls é para limpar a tela 
    int N, Resultado; 
    scanf("%d", &N);
    Resultado = Fib (N);
    if (Resultado != ERRO) printf ("Resposta: %d" , Resultado);
    else printf ("Posicao nao existente.");
}

int Fib (int X) {
    if (X == 1 || X ==2) return (1);
    else if (X > 2) return  Fib(X -1) + Fib(X -2);
    else return (ERRO);
}