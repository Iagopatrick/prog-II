#include <stdio.h>

int main(){
    float valor, juros, valorfinal;
    int prazo;


    printf("Digite o valor da compra: \n");
    scanf("%f", &valor);
    do{
        printf("Digite o prazo: \n");
        scanf("%d", &prazo);

    }while(prazo <=0);
    if(prazo >= 3){
        juros = valor * 0;
    }
    else if(prazo >= 7){
        juros = valor * 0.005;
    }
    else if(prazo >= 12){
        juros = valor * 0.015;
    }
    else{
        juros = valor *  0.03;
    }
    valorfinal = valor + juros;

    printf("Valor efetivamente a ser gasto: %.2f\n", valorfinal);

    return 0;
}