#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo;
    int numero = 154;
    char palavra[] = "UMA FRASE ALEATORIA";

    arquivo = fopen ("saida.txt", "r"); //Faz a leitura do arquivo 

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    fprintf(arquivo, "Numero: %d Frase:%s\n", numero, palavra);

    fclose(arquivo);
    
        return 0;
}