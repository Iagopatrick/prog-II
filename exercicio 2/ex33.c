#include <stdio.h>

int main(){
    int nPlasma, nLCD;
    float salario, comissao = 0, imposto1, imposto2, total;

    do{
        printf("Digite o salario fixo: \n");
        scanf("%f", &salario);
    }while(salario <= 0);
    do{
        printf("digite o numero de televisores tipo plasma vendido: \n");
        scanf("%d", &nPlasma);
        
    }while(nPlasma < 0);
    do{
        printf("Digite o numero de Televisores tipo LCD vencidos: \n");
        scanf("%d", &nLCD);

    }while(nLCD < 0);


    if(nPlasma < 10){
        comissao += 2 * nPlasma;
    }
    else{
        comissao += 20 * nPlasma;
    }

    if(nLCD < 10){
        comissao += 5 * nLCD;
    }
    else{
        comissao += 50 * nLCD;
    }

    imposto1 = salario * 0.08;
    total = salario + comissao - imposto1;
    if(total >= 500){
        imposto2 = total * 0.15;
        total -= imposto2;
    }
    

    printf("Seu salario total e: %.2f", total);
    return 0;
}