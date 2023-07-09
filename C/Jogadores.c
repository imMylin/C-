#include <stdio.h>

typedef struct{
    char nome[100];
    int idade;
    int chutes;
    int gols;
}tJogador;

int main(){
tJogador j1, j2;

fgets(j1.nome, 100, stdin);
j1.nome[strcspn(j1.nome, "\n")] = 0;

scanf("%d", &j1.idade);
scanf("%d", &j1.chutes);
scanf("%d", &j1.gols);
getchar();

fgets(j2.nome, 100, stdin);
j2.nome[strcspn(j2.nome, "\n")] = 0;

scanf("%d", &j2.idade);
scanf("%d", &j2.chutes);
scanf("%d", &j2.gols);

if(j1.gols > j2.gols){
    printf("%s (%d)", j1.nome, j1.idade);
}else if(j2.gols > j1.gols){
    printf("%s (%d)", j2.nome, j2.idade);
}
return 0;
}
