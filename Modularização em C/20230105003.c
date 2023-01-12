#include <stdio.h>
int numeroPar(){
    int number;
    puts("de um numero par");
    scanf("%i", &number);
    while(number%2 != 0){
        puts("numero invalido, o numero deve ser par");
        puts("de um numero par");
        scanf("%i", &number);
    }
    return number;
    }
int perfeito(int number){
    int rep = number - 1;
    int soma = 0;
    while(rep>0){
        if (number%rep == 0){
            soma += rep;
        }
        rep--;    
    }
    if (soma == number){
        printf("%i eh um numero perfeito", number);
    }else{
        printf("%i nao eh um numero perfeito", number);
    }
    return 0;
}
int main() {
    int number = numeroPar();
    int zero = perfeito(number);

    return 0;
}
