#include <stdio.h>
#include <math.h>

typedef struct{

int x;
int y;

}Ponto;

float retornaDistancia(int x1, int y1, int x2, int y2){
    float dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dist;
}

int main(){

int px, py, n, menorX = 0, menorY = 0;
float menorDistancia = 0;

    scanf("%d %d", &px, &py);
    scanf("%d", &n);

Ponto P[n];
float distancia[n];

for(int i = 0; i < n; i++){
    scanf("%d", &P[i].x);
    scanf("%d", &P[i].y);

}
for(int i = 0; i < n; i++){

    distancia[i] = retornaDistancia(px, py, P[i].x, P[i].y);

    if(menorDistancia > distancia[i]){
        menorDistancia = distancia[i];
        menorX = P[i].x;
        menorY = P[i].y;
    }
}
printf("Ponto mais perto é (%d, %d)", menorX, menorY);
return 0;
}
