#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fatorial(int N);

int main(){
    int n = 5;
    int X = Fatorial(5);
    printf("%d! = %d \n", n, X);

}

int Fatorial(int N){
    int Resposta = 1;
    if (N >= 0){
        for (int i=1; i<=N ;i++)
            Resposta = Resposta * i;
            return(Resposta);
    }
    else{
        return(ERRO);
    }
}