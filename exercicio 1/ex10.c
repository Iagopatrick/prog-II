#include <stdio.h>

int main(){
    float valorL, DiasTrabalhados;
    

    printf("Digite a quantidade de dias trabalhados: \n");
    scanf("%f", &DiasTrabalhados);

    valorL = (DiasTrabalhados*30.0) - (30.0 * 0.08);

    printf("\nO valor liquido e: %.2f", valorL);

    return 0;
}