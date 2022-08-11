#include <stdio.h>

int main(){
    float indice;
    
    do{

        printf("Digite o valor do consumo: \n");
        scanf("%f", &indice);
    }while(indice < 0.05);

    if(indice <= 0.29){
        printf("Considerar Aceitavel");
    }
    else if(indice <=0.4){
        printf("Suspender atividades do Grupo 1");
    }
    else if(indice <=0.5){
        printf("Suspender atividades dos grupos 1 e 2");
    }
    else{
        printf("Suspender atividades de todos os grupos");
    }



    return 0;
}