#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo;
    int numero = 777;
    char palavra[] = "blablaablabalbalblablabla";

    arquivo = fopen ("saida.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    fprintf(arquivo, "Numero: %d Frase:%s\n", numero, palavra);

    fclose(arquivo);
    
        return 0;
}