#include <stdio.h>
#include <math.h>

typedef struct{

    int x;
    int y;

}Ponto;

float retornaDistancia(int x1, int y1, int x2, int y2){
    float dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return pow(dist, 2);
}

int main(){
Ponto A, B;
scanf("%d %d", &A.x, &A.y);
scanf("%d %d", &B.x, &B.y);

float resultado = retornaDistancia(A.x, A.y, B.x, B.y);

printf("%.f", resultado);


return 0;
}
