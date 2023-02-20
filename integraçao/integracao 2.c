#include <stdio.h>


void intersecao(int a[], int b[], int tam_a, int tam_b){
    int c[120];
    int n = 0;
    for(int i=1;i<=tam_a;i++){
        for(int g=1;g<=tam_b;g++){
            if(a[i] == b[g]){
                n++;
                c[n] = a[i];
            }
        }
    }
    puts(" ");
    c[0] = n;
    for(int i=1;i<=n;i++){
        printf("%i ", c[i]);
    }
}
int main() {
    int tam_a, tam_b;
    puts("qual o tamanho do vetor a?");
    scanf("%i", &tam_a);
    puts("qual o tamanho do vetor b?");
    scanf("%i", &tam_b);
    int a[tam_a+1];
    int b[tam_b+1];
    a[0] = tam_a;
    b[0] = tam_b;
    for(int i=1;i<=tam_a;i++){
        printf("a[%i] = ", i);
        scanf("%i", &a[i]);
    }
    for(int i=1;i<=tam_b;i++){
        printf("b[%i] = ", i);
        scanf("%i", &b[i]);
    }
    intersecao(a, b, tam_a, tam_b);
}
