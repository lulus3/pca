#include <stdio.h>

int receber_imprimir(int tamanho){
    int i;
    int sequencia[tamanho];
    for(i=0;i<tamanho;i++){
        printf("de um valor: ");
        scanf("%i", &sequencia[i]);
    }
    for (i=0;i<tamanho;i++){
    	if (sequencia[i] % 2 == 0){
		printf("%i \n", sequencia[i]);
		}
        
    }
}

int main() {
    int tamanho;
    printf("de o numero de numeros da lista: ");
    scanf("%i", &tamanho);
    while(tamanho > 100 || tamanho < 0){
        puts("valor incorreto");
        printf("de outro valor: ");
        scanf("%i", &tamanho);
    }
    int lista = receber_imprimir(tamanho);

    return 0;
}
