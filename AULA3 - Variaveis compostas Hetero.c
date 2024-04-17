#include <stdio.h>

struct Pessoa {
    char nome[20];
    int idade;
    float altura;
};

int main() {
// EX de uma struc pessoa
    struct pessoa X;
    strcpy(X.nome, "Joao");
    X.idade = 25;
    X.altura = 1.75;

    // Acessando os campos da struct
    printf("Nome:%s\n", X.nome); // saida: Nome: Joao
    printf("Idade:%d\n", X.idade); // saida: Idade: Joao
    printf("Altura:%.2f\n", X.altura); // saida: Altura: Joao

    return 0;
}