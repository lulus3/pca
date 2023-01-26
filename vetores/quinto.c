#include <stdio.h>

int funcao(int seq[], int n){	
	int i;
	int valor, mult;
	for (i=0;i<n;i++){
		valor = seq[i];
		mult = valor;
		while (valor > 1){
			valor--;
			mult = mult * valor;
		}
		seq[i] = mult;
		printf("%i \n", seq[i]);
	}
	return 0;
}

int main(){
	int n, i, seq;
	printf("de o numero: ");
	scanf("%i", &n);
	int sequencia[n];
	for (i=0;i<n;i++){
		printf("adicione um valor na sequencia: ");
		scanf("%i", &sequencia[i]);
	}
	int zero = funcao(sequencia, n);
}
