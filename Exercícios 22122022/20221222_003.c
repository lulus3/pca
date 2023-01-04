#include <stdio.h>

int main() {
    int somapar, somaimpar, valor;
    somapar = 0;
    somaimpar = 0;
    printf("de um numero: ");
    scanf("%i", &valor);
    while (valor<=1000){
        if ((valor%2)==0){
            somapar += valor;
        } else{
            somaimpar += valor;
        }
        printf("de outro inteiro: ");
        scanf("%i", &valor);
    }
    printf("a soma dos pares eh %i \n", somapar);
    printf("a soma dos impares eh %i", somaimpar);

    return 0;
}
