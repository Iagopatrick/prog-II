#include <stdio.h>

int main(){
    float saldo, credito;
    
    do{

        printf("Digite o valor do saldo medio do cliente: \n");
        scanf("%f", &saldo);
    }while(saldo < 0);

    if(saldo <= 200){
        credito = 0;
    }
    else if(saldo <=400){
        credito = saldo * 0.2;    
    }
    else if(saldo <=600){
        credito =  saldo * 0.3;
    }
    else{
        credito =  saldo * 0.4;
    }
    printf("O saldo medio e: %.2f", saldo);
    printf("O credito e: %0.2f", credito);



    return 0;
}