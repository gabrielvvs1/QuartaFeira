#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//algoritmo Quicksorte

#define VERDADEIRO 1
#define FALSO 0

struct dados{
    int idade;
    int peso;
};

typedef struct dados Dados;

void main(){
    Dados D1 ={25,50};
    Dados D2 ={20,30};
    Dados D3 ={30,40};
    Dados D4 ={20,65};
    Dados D5 ={20,40};
    Dados D6 ={18,60};
    Dados D7 ={30,45};
    Dados D8 ={18,65};
    
    Dados *Vetor[] = {&D1, &D2, &D3, &D4, &D5, &D6, &D7, &D8};
    printf("Endereco: %d %d %d\n", Vetor[2], Vetor[2]-> idade);
    
}