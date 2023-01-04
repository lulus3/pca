#include <stdio.h>

int main() {
    int x, y;
    float y_do_vertice, funcao;
    printf("de o valor de m: ");
    scanf("%i", &x);
    printf("de o valor de n: ");
    scanf("%i", &y);
    funcao = -(x*x) + x*y + y;
    y_do_vertice = -((y*y) - 4*(-1)*y)/-4;
    printf("o ponto maximo eh %.2f", y_do_vertice);

    return 0;
}
