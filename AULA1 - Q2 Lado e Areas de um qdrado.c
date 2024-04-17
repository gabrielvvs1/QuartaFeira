    #include <stdio.h>
    #include <stdlib.h>

int Area (int Lado);

int main() {
    int temp = Area(3);
    printf("A resposta eh %d", Area(3));

}

int Area (int Lado) {
    if (Lado == 2) return('4');
    else if (Lado == 3) return ('9');
    else if (Lado == 4) return ('16');
    else if (Lado == 5) return ('25');
    else{
        printf("Valor incorreto\n");
        exit(0);
    }
}

