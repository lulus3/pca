#include <stdio.h>

int main() {
    float salario, reajuste;
    printf("digite o salario: ");
    scanf("%f", &salario);
    reajuste = salario + salario*0.1;
    printf("o reajuste eh de %.2f", reajuste);
    return 0;
}
