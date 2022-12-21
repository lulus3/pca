#include <stdio.h>

int main() {
    int repeticao, soma, variavel;
    soma = 0;
    for (repeticao=5; repeticao!=0; repeticao-=1) {
        puts("digite o numero: ");
        scanf("%i", &variavel);
        soma += variavel;
    }
    printf("a soma é %i ", soma);
    return 0;
}
