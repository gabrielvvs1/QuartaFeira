#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Posicao {
    int Linha;
    int Coluna;
};

struct Posicao MaiorElemento (int Matriz [3][3]);  // Maior valor
int BuscarElemento(int M[3][3], struct Posicao P);

void main (){
    system ("cls");
    int matriz [3][3]; // Espaco em memoria pode ser calculado usando "sizeof(matriz);" 
    
    for (int L=0; L<3; L++){
        for (int C = 0; C < 3; C++){
            printf("Elemento da posicao &d X &d : ", L, C);
            scanf("%d", matriz[L][C]);
        }
    }

    struct Posicao X = MaiorElemento (matriz);
    int Elemento = BuscarElemento(matriz,X);
    printf("%d\n", Elemento);

}


// implementa as funcoes secundarias

struct Posicao MaiorElemento (int Matriz [3][3]){
    struct Posicao X;
    int MaiorValor = Matriz [0][0];
    X.Linha = 0;
    X.Coluna = 0

    for (int L=0; L<3; L++){
        (int C=0; C<3; C++){
            if(M[L][C] > MaiorValor);
            MaiorValor = Matriz [L][C];
            X.Linha = L;
            X.Coluna = C;

        }

    }
     return(X);

}


int BuscarElemento(int M[3][3], struct Posicao P){
    int Resposta = M[P.Linha][P.Coluna];
    return(Resposta);
}
