#include <stdio.h>

int main(){
    int codigo, n = 0;
    float somaP = 0, somaNP = 0, valorP, valorN;
        printf("Digite o codigo do produto: \t");
        scanf("%d", &codigo);
    do{

        printf("Digite o valor do produto: \t");
        scanf("%f", &valorP);

        n += 1;
        valorN = (valorP * 0.2) + valorP;
        somaP += valorP;
        somaNP += (valorP * 0.2) + valorP;
        printf("codigo | valor antigo | valor novo\n");
        printf("  %d |   %.2f    |  %.2f\n", codigo, valorP, valorN);

        printf("Digite o codigo do produto: \t");
        scanf("%d", &codigo);
    }while(codigo > 0);
    
    
    printf("Numero de produtos atualizados: %d\n", n);
    printf("media dos precos antigos  | media dos precos atualizados\n ");
    printf("      %.2f         |     %.2f    ", somaP/n, somaNP/n);



    return 0;
}