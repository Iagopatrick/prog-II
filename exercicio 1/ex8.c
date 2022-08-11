#include <stdio.h>

int main(){
    float real, dolar;
    printf("Digite o valor do dinheiro em real: \n");
    scanf("%f", &real);

    printf("\nDigite a cotação do dolar: \n");
    scanf("%f", &dolar);

    printf("O seu dinheiro vale, em dolares: %.2f", real/dolar);
    return 0;
}