#include <stdio.h>

int main() {
    float raio, area;
    printf("digite o raio: ");
    scanf("%f", &raio);
    area = raio * raio * 3.14;
    printf("a area do circulo eh %.2f", area);
    return 0;
}