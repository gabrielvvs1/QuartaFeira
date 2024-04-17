#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[1024];
    int idade;
    float altura;
    float peso;
};

float calcularIMC(struct Pessoa);
struct Pessoa criarPessoa();
void atualizarIdade(struct Pessoa *X);


int main(){

    system ("cls");

    struct Pessoa X = criarPessoa(); 
    printf("%s %d %.2f %.2f\n", X.nome, X.idade, X.altura, X.peso);
    printf("IMC: %.3f", calcularIMC(X));
    atualizarIdade(&X);
    printf("%s %d %.2f %.2f\n", X.nome, X.idade, X.altura, X.peso);

    
    return 0;
}

// implemetando a funcao de calcular IMC

float calcularIMC( struct Pessoa X){
    float IMC = X.peso/(X.altura * X.altura);
    return(IMC);
}

struct Pessoa criarPessoa(){
    struct Pessoa Sujeito;

    printf("Digite um nome: ");
    gets(Sujeito.nome);

    printf("Digite a idade: ");
    scanf("%d", &Sujeito.idade);

    printf("Digite a altura: ");
    scanf("%f", &Sujeito.altura);

    printf("Digite o peso: ");
    scanf("%f", &Sujeito.peso);
    return (Sujeito);
    
}

// A pessoa fez aniversario

void atualizarIdade(struct Pessoa *X){
    X->idade = X-> idade + 1;
}
