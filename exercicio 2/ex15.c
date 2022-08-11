#include <stdio.h>

int main(){
    float valor, valorfinal;
    int n;
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor);
    if(valor <= 500){
        valorfinal = valor/5.0;
        n = 5;
    }
    else{
        valorfinal = valor/8.0;
        n = 8;
    }
    printf("\nO valor final em %d prestacoes sem juros e: RS %.2f", n, valorfinal);

    return 0;
}