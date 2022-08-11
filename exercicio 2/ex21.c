#include <stdio.h>

int main(){
    char nome[12];
    int dependentes;
    float renda, imposto;

    printf("Digite seu cpf\n");
    gets(nome);

    printf("\nNumero de dependentes: \n");
    scanf("%d", &dependentes);
    do{
        printf("\nDigite sua renda: \n");
        scanf("%f", &renda);
    }while(renda <= 0);
    if(renda <= 2){
        printf("Isento");
        return 0;
    }
    else if(renda <=3){
        imposto = renda * 0.05;
    }
    else if(renda <= 5){
        imposto = renda * 0.1;
    }
    else if(renda <= 7){
        imposto = renda * 0.15;
    }
    else{
        imposto = renda * 0.2;
    }
    printf("O valor do imposto reduzido e: %.2f", imposto);



    return 0;
}