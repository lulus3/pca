#include <stdio.h>

int main() {
    float F, C;
    printf("digite a temperatura em celcius: ");
    scanf("%f", &C);
    F = ((C/5)*9)+32;
    printf("a temperatura em Farenheit eh %.1fº", F);
    return 0;
}
