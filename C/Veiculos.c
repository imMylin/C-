#include <stdio.h>
#include <string.h>

typedef struct{
    char modelo[10];
    char marca[10];
    int ano;
    int preco;
}tVeiculo;

int main(){

tVeiculo carro1, carro2;

fgets(carro1.modelo, 10, stdin);
carro1.modelo[strcspn(carro1.modelo, "\n")] = 0;

fgets(carro1.marca, 10, stdin);;
carro1.marca[strcspn(carro1.marca, "\n")] = 0;

scanf("%d", &carro1.ano);
scanf("%d", &carro1.preco);
getchar();

fgets(carro2.modelo, 10, stdin);
carro2.modelo[strcspn(carro2.modelo, "\n")] = 0;

fgets(carro2.marca, 10, stdin);
carro2.marca[strcspn(carro2.marca, "\n")] = 0;

scanf("%d", &carro2.ano);
scanf("%d", &carro2.preco);
getchar();

if(carro1.ano == carro2.ano){
    if(carro1.preco < carro2.preco){
        printf("%s %s", carro1.marca, carro1.modelo);
    }else{
        printf("%s %s", carro2.marca, carro2.modelo);
    }
}
else if(carro1.ano < carro2.ano){
    printf("%s %s", carro1.marca, carro1.modelo);
}else if(carro2.ano < carro1.ano){
    printf("%s %s", carro2.marca, carro2.modelo);
    }


return 0;
}
