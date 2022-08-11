#include <stdio.h>

int main(){
    int codigo1, codigo2, qntd1, qntd2;
    float IPI, valor1, valor2;

    printf("Digite a porcentagem do IPI a ser acrescido: \n");
    scanf("%f", &IPI);

    printf("Digite o codigo do produto 1: \n");
    scanf("%d", &codigo1);
    printf("Digite o valor do produto: \n");
    scanf("%f", &valor1);
    printf("Digite a quantidade do produto: \n");
    scanf("%d", &qntd1);

    printf("Digite o codigo do produto 2: \n");
    scanf("%d", &codigo2);
    printf("Digite o valor do produto: \n");
    scanf("%f", &valor2);
    printf("Digite a quantidade do produto: \n");
    scanf("%d", &qntd2);

    printf("Preco final e: %f", (valor1 * qntd1 + valor2 * qntd2)*(IPI/100 + 1.0));

    


    return 0;
}