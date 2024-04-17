#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo;
    char Equipe[50];
    int V, E, D, Pontuacao;

    arquivo = fopen("Campeonato.txt", "r")

     if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
        
    int pos = 0;

    system("cls");

    while(fscanf(arquivo, "%s %d %d %d", Equipe, &V, &E, &D) != IOF){
        Pos++;
        printf("%d\t", Pos);
        Pontuacao = 3 * V + 1 * E + 0 * D;
        printf("%s\t\t%dt%dt%dt%d\n" ,Equipe, V, E, D, Pontuacao);
    }
    

    fclose(arquivo);
    
        return 0;
}