#include <stdio.h>

int ehEsparsa(int X[10][10], int largura, int altura){
int cont = 0;

for(int i = 0; i<largura; i++){
    for(int j = 0; j < altura; j++){
        if(X[i][j] == 0){
            cont++;
        }
    }
}
if(cont > (largura * altura) * 0.7){
    return 1;
}else{
    return 0;
}

}

int main(){

int X[10][10];
int largura, altura;

scanf("%d %d", &altura, &largura);

for(int i = 0; i < largura; i++){
    for(int j = 0; j<altura; j++){
        scanf("%d", &X[i][j]);
    }
}

int resultado = ehEsparsa(X, largura, altura);

if(resultado == 1){
    printf("A matriz é esparsa");
}else{
    printf("A matriz não é esparsa");
}

return 0;
    }
