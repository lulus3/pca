#include <stdio.h>

int main() {
    float number3, op1, op2, op3;
    int number1, number2;
    printf("primeiro numero: ");
    scanf("%i", &number1);
    printf("segundo numero: ");
    scanf("%i", &number2);
    printf("terceiro numero: ");
    scanf("%f", &number3);
    
    op1 = (2*number1)*(number2/2);
    op2 = (3*number1)+(number3);
    op3 = number3*number3*number3;
    
    printf("primeira operacao: %.1f \n", op1);
    printf("segunda operacao: %.1f \n", op2);
    printf("tercira operacao: %.1f \n", op3);
    return 0;
}
