#include <stdio.h>

int main() {
    int divisor, number, soma;
    printf("de o numero inteiro: ");
    scanf("%i", &number);
    divisor = number -1;
    soma = 0;
    while (divisor>=1){
        if ((number%divisor)==0){
            soma += divisor;
            
        }
        divisor--;
    }
    if (soma==number){
        printf("%i eh um numero perfeito", number);
    } else {
        printf("%i nao eh um numero perfeito", number);
    }

    return 0;
}
