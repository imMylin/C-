#include <stdio.h>

int somaMatriz(int A[10][10], int B[10][10], int m, int n){
int C[10][10];

for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        C[i][j] = A[i][j] + B[i][j];
    }
}
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", C[i][j]);
    }printf("\n");
}

}

int main(){
int M1[10][10], M2[10][10];
int m, n;

scanf("%d %d", &m, &n);

for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M1[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M2[i][j]);
        }
    }

somaMatriz(M1, M2, m, n);

return 0;
}
