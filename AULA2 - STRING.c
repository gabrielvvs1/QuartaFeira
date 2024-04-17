#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MYstrlen(char *str) {
    int tamanho = 0;
    for(tamanho = 0; str[tamanho] != '\0'; tamanho++);
    return(tamanho);
}



int main(){
    char Frase[1024] = "Meu nome eh Eneias!!!";
    int Tamanho = strlen(Frase);
    printf("(%s) Tem tamanho %d", Frase , Tamanho);
    Tamanho = MYstrlen(Frase);
    printf("(%s) Tem tamanho %d", Frase , Tamanho);



    return 0;
}