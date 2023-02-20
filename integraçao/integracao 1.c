#include <stdio.h>
#include <string.h>
#define jogadores 23
#define info 3
#define limite 50

int ponto(char nota[50]){
    char lista[11][limite] = {{'0'}, {'1'}, {'2'}, {'3'}, {'4'}, {'5'}, {'6'}, {'7'}, {'8'}, {'9'}, {"10"}};
    int retorno;
    for(int g=0;g<11;g++){
        if (strcmp(nota, lista[g]) == 0){
            retorno = g;
        }
    }
    return retorno;
}

int main() {
    char nada[limite] = "__";
    char goleiro[limite] = "g";
    char meio[limite] = "m";
    char zagueiro[limite] = "z";
    char atacante[limite] = "a";
    int maior_nota = 0;
    char time[jogadores][info][limite] = {
        {"hugo souza", "g", "9"}, {"matheus cunha", "g", "10"}, 
        {"santos", "g", "9"}, {"rodrigo caio", "z", "9"},
        {"leo pereira", "z", "9"}, {"david luiz", "z", "10"}, 
        {"cleiton", "z", "8"}, {"fabricio bruno", "z", "7"}, 
        {"pablo", "z", "9"}, {"matheuzinho", "z", '9'},
        {"arturo vidal", "m", "10"}, {"de arascaeta", "m", "10"},
        {"thiago maia", "m", "9"}, {"erick", "m", "6"}, 
        {"gerson", "m", "9"}, {"everto ribeiro", "m", "10"},
        {"victor hugo", "m", "7"}, {"matheus franca", "m", "6"},
        {"gabi", "a", "10"}, {"bruno enrique", "a", "10"}, 
        {"pedro", "a", "9"}, {"marinho", "a", "8"}, 
        {"everton", "a", "8"}
    };
    char jogo[11][2][limite];
    int n = 0;
    int ide = 0;
    //goleiros
    for(int i=0;i<jogadores;i++){
        if(strcmp(time[i][1], goleiro) == 0){
            int nota = ponto(time[i][2]);
            if (nota > maior_nota){
                maior_nota = nota;
                ide = i;
            }
        }
    }
    strcpy(jogo[n][0], time[ide][0]);
    strcpy(jogo[n][1], time[ide][1]);
    n++;
    strcpy(time[ide][1], nada);
    //zagueiros
    for (int i=0;i<4;i++){
        maior_nota = 0;
        ide = 0;
        for(int a=0;a<jogadores;a++){
            if(strcmp(time[a][1], zagueiro) == 0){
                int nota = ponto(time[a][2]);
                if (nota > maior_nota){
                    maior_nota = nota;
                    ide = a;
                }
            }
        }
        strcpy(jogo[n][0], time[ide][0]);
        strcpy(jogo[n][1], time[ide][1]);
        n++;
        strcpy(time[ide][1], nada);
    }
    //meios
    for (int i=0;i<4;i++){
        maior_nota = 0;
        ide = 0;
        for(int a=0;a<jogadores;a++){
            if(strcmp(time[a][1], meio) == 0){
                int nota = ponto(time[a][2]);
                if (nota > maior_nota){
                    maior_nota = nota;
                    ide = a;
                }
            }
        }
        strcpy(jogo[n][0], time[ide][0]);
        strcpy(jogo[n][1], time[ide][1]);
        n++;
        strcpy(time[ide][1], nada);
    }
    //atacantes
    for (int i=0;i<2;i++){
        maior_nota = 0;
        ide = 0;
        for(int a=0;a<jogadores;a++){
            if(strcmp(time[a][1], atacante) == 0){
                int nota = ponto(time[a][2]);
                if (nota > maior_nota){
                    maior_nota = nota;
                    ide = a;
                }
            }
        }
        strcpy(jogo[n][0], time[ide][0]);
        strcpy(jogo[n][1], time[ide][1]);
        n++;
        strcpy(time[ide][1], nada);
    }
    printf("1 goleiro: %s \n", jogo[0][0]);
    for(int i=1;i<5;i++){
        printf("%i defesa: %s \n", i+1, jogo[i][0]);
    }
    for(int i=5;i<9;i++){
        printf("%i meio: %s \n", i+1, jogo[i][0]);
    }
    for(int i=9;i<11;i++){
        printf("%i atacante: %s \n", i+1, jogo[i][0]);
    }
}
