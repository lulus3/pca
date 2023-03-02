#include <stdio.h>
#include <string.h>

void adicionar_ponto(char equipes[][7][120], float nota[][7], int n){
	n--;
	for (int i=0;i<7;i++){
		nota[n][i]++;
		if (nota[n][i] > 10){
			nota[n][i] = 10;
		}	
	}
}
void aluno_novo(char equipes[][7][120], float nota[][7], char sexo[][7][10], char feminino[10], int lugar){
	lugar--;
	char sim[4] = "sim";
	char ask[4];
	int grupo = 0;
	char nome[120];
	char sexo_novo[10];
	float nota_nova;
	printf("quer adicionar um aluno? : ");
	scanf("%s", ask);
	if (strcmp(ask, sim) == 0){
		printf("deseja colocar em que grupo? 1 ou 2: ");
		scanf("%i", &grupo);
		grupo--;
		printf("nome? ");
		scanf("%s", nome);
		printf("sexo? m ou f: ");
		scanf("%s", sexo_novo);
		printf("nota: ");
		scanf("%f", &nota_nova);
		strcpy(equipes[grupo][lugar], nome);
		strcpy(sexo[grupo][lugar], sexo_novo);
		nota[grupo][lugar] = nota_nova;
	}
}
void imprimir(char equipes[][7][120]){
	int grupo = 0;
	printf("deseja imprimir qual grupo? 1 ou 2: ");
	scanf("%i", &grupo);
	printf("o grupo %i: ", grupo);
	grupo--;
	for (int i=0;i<7;i++){
		printf("%s  ", equipes[grupo][i]);
	}
}

int main() {
    char equipes[2][7][120] = {{"maria", "joaquim", "lais", "emilly", "lucas", "larissa", "__"}, {"tamara", "sonia", "jacinta", "emanuel", "rahilson", "victor", "__"}};
    char sexo[2][7][10] = {{"f", "m", "f", "f", "m", "f", "_"}, {"f", "f", "f", "m", "m", "m", "_"}};
    float nota[2][7] = {{9.0, 0.0, 8.0, 7.0, 0.0, 6.0, 0}, {8.0, 7.0, 10.0, 10.0, 3.0, 5.0, 0}};
    char feminino[10] = "f";
    char selecao[12][2][120];
    int meninas1 = 0;
    int meninas2 = 0;
    int n = 0;
    for(int i=0;i<6;i++){
        if (strcmp(sexo[0][i], feminino) == 0){
            meninas1++;
            if (nota[0][i] >= 8){
            	char equipe1[120] = "equipe1";
            	strcpy(selecao[n][0], equipes[0][i]);
            	strcpy(selecao[n][1], equipe1);
            	n++;
			}
		}
    }
    for(int i=0;i<6;i++){
        if (strcmp(sexo[1][i], feminino) == 0){
            meninas2++;
            if (nota[1][i] >= 8){
            	char equipe2[120] = "equipe2";
            	strcpy(selecao[n][0], equipes[1][i]);
            	strcpy(selecao[n][1], equipe2);
            	n++;
			}
        }
    }
    if (meninas1 > meninas2){
        puts("o grupo 1 tem mais meninas");
    }
    if (meninas1 < meninas2){
        puts("o grupo 2 tem mais meninas");
    }
    if (meninas1 == meninas2){
        puts("os dois grupos tem o mesmo numero de meninas");
    }
    for (int i=0;i<n;i++){
    	printf("%s \n", selecao[i][0]);
	}
    adicionar_ponto(equipes, nota, 2);
    aluno_novo(equipes, nota, sexo, feminino, 7);
    imprimir(equipes);
    

    return 0;
} 
