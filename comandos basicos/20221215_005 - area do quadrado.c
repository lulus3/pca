#include <stdio.h>

int main() {
    float lado, area;
    printf("digite o valor do lado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("a area do quadrado eh %.1f", area);
    printf(" e o dobro eh %.1f", area*2);
    return 0;
}
