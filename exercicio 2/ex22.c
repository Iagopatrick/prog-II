#include <stdio.h>

int main(){
    float tarifa, esgoto, total;
    int consumo;

    do{

        printf("Digite o valor do consumo: \n");
        scanf("%d", &consumo);
    }while(consumo < 0);

    if(consumo <= 10){
        tarifa = consumo * 0.69;
    }
    else if(consumo <= 15){
        tarifa = consumo * 1.17;
    }
    else if(consumo <=25){
        tarifa = consumo + 1.48;
    }
    else{
        tarifa = consumo + 1.60;
    }

    esgoto = tarifa + (tarifa * 0.025);
    total = 5.0 + esgoto + tarifa;

    printf("%.2f", total);


    return 0;
}