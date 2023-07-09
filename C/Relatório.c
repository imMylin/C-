#include <stdio.h>
#include <string.h>
typedef struct{
    char descricao[50];
    float peso;
    char tipo;

}Movel;

int main(){

int n, tipoS, terminaReal;
float movelPesado;
char *palavra, str[] = {"Real"};

scanf("%d", &n);
Movel m[n];

for(int i = 0; i < n; i++){
    getchar();
    fgets(m[i].descricao, 50, stdin);
    m[i].descricao[strcspn(m[i].descricao, "\n")] = 0;
    scanf("%f", &m[i].peso);
    scanf("%s", &m[i].tipo);

}


for(int i = 0; i < n; i++){
    if(m[i].tipo == 's' && m[i].peso > 10.0){
        tipoS++;
    }

}

for(int i = 0; i < n; i++){
    if(movelPesado < m[i].peso){
        movelPesado = m[i].peso;
    }
}
for(int i = 0; i < n; i++){

    palavra = strstr(m[i].descricao, str);
    if(palavra){
        terminaReal++;
    }

}

printf("Tipo 's' acima de 10Kg: %d\n", tipoS);
printf("Termina em \"Real\": %d\n", terminaReal);

for(int i = 0; i<n; i++){
    if(movelPesado == m[i].peso){
        printf("Mais pesado: \"%s\"\n", m[i].descricao);
    }
}

return 0;
}
