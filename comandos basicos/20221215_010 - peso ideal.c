#include <stdio.h>

int main() {
    float altura, peso;
    printf("altura: ");
    scanf("%f", &altura);
    peso = (72.7*altura)-58;
    printf("o peso ideal é %.1f", peso);

    return 0;
}
