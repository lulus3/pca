#include <stdio.h>

int main() {
    int rep, number, op, soma;
    soma = 0;
    for (rep=50;rep!=0;rep-=1){
        printf("digite o numero: ");
        scanf("%i", &number);
        op = number%2;
        if (op==0) continue;
        soma += number;
    }
    printf("a soma eh %i", soma);
    return 0;
}
