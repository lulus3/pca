#include <stdio.h>

int main() {
    float x, y, soma;
    x = 1;
    y = 1;
    soma = 0;
    while (x<=99){
        soma += x/y;
        x+=2;
        y++;
    }
    printf("resultado eh %.4f", soma);

    return 0;
}
