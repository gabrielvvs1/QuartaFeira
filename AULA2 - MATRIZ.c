#include <stdio.h>
#include <stdlib.h>

int main(){


    system ("cls");
    int M [3][3] = {
        {1, 4, 3},
        {2, 1, 2},
        {0, 5, 6}
    };

    int Determinate = 0;

    // diagonais para baixo
    Determinate = Determinate + M [0][0] * M [1][1] * M [2][2];
    Determinate = Determinate + M [0][1] * M [1][2] * M [2][0];
    Determinate = Determinate + M [0][2] * M [1][0] * M [2][1];
    //diagonais para cima
    Determinate = Determinate - M [2][0] * M [1][1] * M [0][2];
    Determinate = Determinate - M [2][1] * M [1][2] * M [0][0];
    Determinate = Determinate - M [2][2] * M [1][0] * M [0][1];

    printf("Determinante: %d", Determinate);

    return 0;
}
