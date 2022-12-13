#include <stdio.h>

int main() {
    float conta, porcentagem, final;
    printf("digite o valor da conta: ");
    scanf("%f", &conta);
    printf("digite o valor da porcentagem do garçom: ");
    scanf("%f", &porcentagem);
    final = conta + (conta*(porcentagem/100));
    printf("o valor final da conta eh de %.2f", final);
    return 0;
}
