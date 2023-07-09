#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int maisAntiga(Data d1, Data d2){

if(d1.ano < d2.ano){
    return 1;
}else if(d2.ano < d1.ano){
    return -1;
}
else if(d1.ano == d2.ano && d1.mes < d2.mes){
    return 1;
}
else if(d2.ano == d1.ano && d2.mes < d1.mes){
    return -1;
}
else if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia < d2.dia){
    return 1;
}
else if(d2.ano == d1.ano && d2.mes == d1.mes && d2.dia < d1.dia){
    return -1;
}
else{
    return 0;
}
}

int main(){

    Data d1, d2;

    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int res = maisAntiga(d1, d2);

    if(res == 1){
        printf("Pessoa 1 é mais velha");
    }else if(res == -1){
    printf("Pessoa 2 é mais velha");
    }else if(res == 0){
    printf("Pessoas são da mesma idade");
    }



return 0;
}
