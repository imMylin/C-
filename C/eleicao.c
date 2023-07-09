#include <stdio.h>

typedef struct{

    char nome[50];
    int numero;
    int votos;

}tRegistro;

int main (){

int n, votacao, nulos, total, naoNulo;
scanf("%d", &n);
float percentual[n], maiorPercentual = 0, totalNulos = 0    ;
getchar();
tRegistro candidato[n];

for(int i = 0; i < n; i++){
    scanf("%d", &candidato[i].numero);
    getchar();
    fgets(candidato[i].nome, 50, stdin);
    candidato[i].nome[strcspn(candidato[i].nome, "\n")] = 0;
    candidato[i].votos = 0;
}
while(1){

    scanf("%d", &votacao);
    if(votacao < 0){
        break;
    }
    naoNulo =  0;
    for(int i = 0; i < n; i++){
        if(votacao == candidato[i].numero){
            candidato[i].votos++;
            naoNulo = 1;
        }
}   if (naoNulo == 0){
            nulos++;
    } total++;
}
for(int i = 0; i < n; i++){
    percentual[i] = (candidato[i].votos * 100.0)/ total;
    if(percentual[i] > maiorPercentual){
        maiorPercentual = percentual[i];
    }
}
for(int i = 0; i < n; i++){
   if(percentual[i] < maiorPercentual){
        printf("%.2f - %d - %s\n", percentual[i], candidato[i].numero, candidato[i].nome);
   }else{
        printf("%.2f - %d - %s VENCEDOR\n", percentual[i], candidato[i].numero, candidato[i].nome);
        }
}
totalNulos = (nulos * 100.0 / total);
printf("%.2f - Nulos\n", totalNulos);

return 0;
}
