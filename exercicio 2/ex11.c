#include <stdio.h>

int main(){
    float salario, aumento;
    int  codigo;
    do{
        printf("Digite o salario:");
        scanf("%f", &salario);

    }while(salario <= 0);
    
    printf("Digite o codigo do cargo correspondete: ");
    scanf("%f", &codigo);

    switch(codigo){
        case 101:
            printf("Cargo: Gerente");
            printf("Percentual: 0");
            printf("Salario novo: %f", salario);
            break;
        case 102:
            aumento = 0.5/100.0;
            printf("Cargo: Analista");
            printf("Percentual: 0,5");
            printf("Salario novo: %f", salario + (salario * aumento));
            break;
        case 103:
            aumento = 1.5/100.0;
            printf("Cargo: Programador");
            printf("Percentual: 1,5");
            printf("Salario novo: %f", salario + (salario * aumento));
            break;
        case 104:
            aumento = 3.0/100.0;
            printf("Cargo: Analista");
            printf("Percentual: 3,0");
            printf("Salario novo: %f", salario + (salario * aumento));
            break;
        default:
            aumento = 40.0/100.0;
            printf("Cargo: Desconhecido");
            printf("Percentual: 40,0");
            printf("Salario novo: %f", salario + (salario * aumento));
            break;
    }

    return 0;
}