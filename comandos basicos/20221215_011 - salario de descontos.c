#include <stdio.h>

int main() {
    float por_hora, imposto_renda, inss, sindicato;
    float bruto, liquido;
    int horas;
    printf("ganhos por hora: ");
    scanf("%f", &por_hora);
    printf("horas trabalhadas: ");
    scanf("%i", &horas);
    bruto = por_hora*horas;
    imposto_renda = bruto * 0.11;
    inss = bruto*0.08;
    sindicato = bruto*0.05;
    liquido = bruto - (imposto_renda+inss+sindicato);
    printf("salario bruto: R$ %.2f \n", bruto);
    printf("INSS: R$ %.2f \n", inss);
    printf("sindicato: R$ %.2f \n", sindicato);
    printf("salario liquido: R$ %.2f", liquido);
    return 0;
}
