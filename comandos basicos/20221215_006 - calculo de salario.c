#include <stdio.h>

int main() {
    float ganho_por_hora, salario;
    int horas;
    printf("digite quanto ganha por hora: ");
    scanf("%f", &ganho_por_hora);
    printf("digite quantas horas trabalhadas: ");
    scanf("%i", &horas);
    salario = ganho_por_hora * horas;
    printf("o salario sera R$ %.2f", salario);
    return 0;
}
