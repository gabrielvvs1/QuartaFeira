    #include <stdio.h>
    #include <stdlib.h>

// FUNCAO COM PARAMETROS

char f (int X);

int main() {
    char ch = f(3);
    printf("A resposta eh %c", ch);

}

char f (int X){
    if (X == 1) return('C');
    else if (X == 2) return ('D');
    else if (X == 3) return ('E');
    else if (X == 4) return ('B');
    else if (X == 5) return ('E');
    else{
        printf("A funcao n esta definida para o valor indicado\n");
        exit(0);
    }
}

