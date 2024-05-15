#include <stdio.h>
#include <stdlib.h>

#define VERDADEIRO 1
#define FALSO 0

// DEFININDO TIPO ABSTRATO DE DADOS DA FRACAO

typedef struct{
    int Num;
    int Den;
} Fracao;

int mdc (int A, int B);
void mostrarFracao(Fracao F);
Fracao criarFracao(int A, int B);
Fracao simplificarFracao(Fracao F);
Fracao somarFracao(Fracao F, Fracao G);
Fracao subtrairFracao(Fracao F, Fracao G);

int main(){
    Fracao F = criarFracao(20, 30);
    printf("Teste n1: Simplificando fracao:\n");
    F = simplificarFracao(F);
    mostrarFracao(F);
    printf("\n");

    printf("Teste n2: Somando as fracao 5/6 e 4/9\n");
    Fracao F1 = criarFracao(5,6);


    return 0;
}

//definindo o tipo abstrato de dados

Fracao criarFracao(int A, int B){
    Fracao X;
    X.Num = A;
    X.Den = B;
    return X;
}

int mdc (int A, int B){
    int Menor;
    int M = 1;
    A = abs (A);
    B = abs (B);
    if (A > B) Menor = B;
    else Menor = A;
    for (int i = 1; i<= Menor; i++){
        if (A % i == 0 && B % i == 0) M = i;
    }
    return M;

}

Fracao simplificarFracao(Fracao F){
    int temp = mdc(F.Num, F.Den);
    F.Num = F.Num / temp;
    F.Den = F.Den / temp;

    return F;
}

void mostrarFracao(Fracao F){
    printf("%d/%d", F.Num, F.Den);
}

Fracao somarFracao(Fracao F, Fracao G){
    Fracao Resultado;
    Resultado.Num = F.Num * G.Den + G.Num * F.Den;
    Resultado.Den = F.Den * G.Den
    Resultado = simplificarFracao(Resultado);
    return Resultado
}