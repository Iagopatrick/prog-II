#include <stdio.h>

int main(){
    float tarifa;
    int consumo;

    do{

        printf("Digite o valor do consumo: \n");
        scanf("%d", &consumo);
    }while(consumo < 0);

    if(consumo <= 70){
        tarifa = consumo * 0.09;
    }
    else if(consumo <= 150){
        tarifa = consumo * 0.20;
    }
    else if(consumo <=200){
        tarifa = consumo + 0.23;
    }
    else{
        tarifa = consumo + 0.26;
    }

    
    printf("A tarifa e: RS %.2f", tarifa);
    



    return 0;
}