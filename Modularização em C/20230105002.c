#include <stdio.h>

int scan(int x){
    int var;
    if (x==0){
        puts("de o peso em gramas");
    }else{
        puts("de a quantidade de semanas");
    }
    scanf("%i", &var);
    return var;
}
int diagnostico(int peso, int semanas){
    if (peso<100 || semanas<28){
        puts("Parto não deverá ser realizado, reavaliar clinicamente");
    }else {
        if (peso>2500 && semanas>28){
            puts("parto normal");
        }else {
            if (peso>2500 && semanas<=28){
                puts("parto cesaria");
            }else {
                if (peso<2000 && peso>1500 && semanas>36){
                    puts("parto normal");
            } else {
                puts("parto cesaria");
            }
        }
        }
    }
}
int main() {
    int peso = 0;
    int semanas = 1;
    peso = scan(peso);
    semanas = scan(semanas);
    diagnostico(peso, semanas);
    return 0;
}