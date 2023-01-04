#include <stdio.h>

int main() {
    float gramas, gramasinicial;
    int tempo, horas, minutos, segundos;
    printf("digite as gramas: ");
    scanf("%f", &gramas);
    tempo = 0;
    gramasinicial = gramas;
    while(gramas>=0.5){
        tempo+=50;
        gramas/=2;
    }
    horas = tempo / 3600;
    tempo = tempo - (horas*3600);
    minutos = tempo / 60;
    segundos = tempo - (minutos*60);
    printf("massa final : %.2f \n", gramas);
    printf("massa inicial: %.2f \n", gramasinicial);
    printf("horas: %i, munitos: %i, segundos: %i", horas, minutos, segundos);

    return 0;
}
