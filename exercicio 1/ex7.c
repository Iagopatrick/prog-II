#include <stdio.h>

int main(){
    float despesa, gorjeta, npessoas;
    printf("Coloque o valor da conta no restaurante:\n");
    scanf("%f", &despesa);

    printf("\n Coloque o valor da gorjeta, em porcentagem: \n");
    scanf("%f", &gorjeta);

    printf("\n Coloque o numero de pessoas que irao dividir a conta: \n");
    scanf("%f", &npessoas);

    printf("O valor para cada pessoa e: %.2f", (despesa + (despesa * (gorjeta/100)))/npessoas);

    return 0;
}