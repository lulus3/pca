#include <stdio.h>

int main() {
    float num, maior, menor;
    int rep;
    puts("de o numero");
    scanf("%f", &num);
    maior = num;
    menor = num;
    for (rep=1;rep<=4;rep++){
        puts("de o numero");
        scanf("%f", &num);
        if (num>maior){
            maior = num;
        }
        if(num<menor){
            menor = num;
        }
    }
    printf("o maior numero eh %.2f, e o menor eh %.2f", maior, menor);

    return 0;
}
