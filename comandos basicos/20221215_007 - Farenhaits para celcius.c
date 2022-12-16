#include <stdio.h>

int main() {
    float F, C;
    printf("digite a temperatura em Farenheit: ");
    scanf("%f", &F);
    C = (5*(F-32)/9);
    printf("a temperatura em celcius eh %.1fº", C);
    return 0;
}
