#include <stdio.h>

int scanIntIntervalo() {
    int var;
    puts("de um valor inteiro entre 0 e 1000");
    scanf("%i", &var);
    while (var<0 || var>1000) {
        puts("valor invalido");
        puts("de um valor inteiro entre 0 e 1000");
        scanf("%i", &var);
    }
    return var;
}
float percentual(float maior, float menor){
    float z = (menor/maior)*100;
    return z;
}
float absdif(float maior, float menor){
    float dif;
    dif = maior - menor;
    if (dif<0){
        dif *= -1;
    }
    return dif;
}
    
int main() {
    int x, y, dif, maior, menor;
    float porcentagem;
    x = scanIntIntervalo();
    y = scanIntIntervalo();
    if (x>=y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }
    porcentagem = percentual(maior, menor);
    dif = absdif(maior, menor);
    printf("o percentual eh %.2f \n", porcentagem);
    printf("o modulo da diferença eh %i", dif);
    
    return 0;
}
