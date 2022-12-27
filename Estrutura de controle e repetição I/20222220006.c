#include <stdio.h>

int main() {
    int rep1, rep2, multiplicando, multiplicador;
    int resultado;
    multiplicando = 1;
    for (rep1=1;rep1<=9;rep1++){
        multiplicador = 1;
        for (rep2=1;rep2<=10;rep2++){
            resultado = multiplicando*multiplicador;
            printf("%i x %i = %i \n", multiplicando, multiplicador, resultado);
            multiplicador++;
        }
        multiplicando++;
    }

    return 0;
}
