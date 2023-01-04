#include <stdio.h>

int main() {
    int number, valor, rep, contador;
    printf("digite o numero: ");
    scanf("%i", &number);
    valor = number-1;
    contador = 0;
    for (rep=valor;rep>=2;rep--){
        if ((number%valor)==0) {
            printf("nao eh primo");
            contador += 1;
            break;
        } 
        valor--;
    }
    if (contador==0){
        puts("eh primo");
    }

    return 0;
}
