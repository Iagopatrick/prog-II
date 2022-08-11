#include <stdio.h>

int main(){
    int codigo, qntd, op;
    float valor = 0;
    
    do{
        printf("Digite o codigo do produto: \n");
        scanf("%d", &codigo);

        printf("Digite a quantidade: \n");
        scanf("%d", &qntd);

        switch(codigo){
            case 1001:
                valor += 5.32 * qntd;
            break;
            case 1324:
                valor += 6.45 * qntd;
            break;
            case 6548:
                valor += 2.37 * qntd;
            break;
            case 987:
                valor += 5.32 * qntd;
            break;
            case 7623:
                valor += 6.45 * qntd;
            break;
            default:
                printf("Codigo invalido!\n");
            break;
        }
        printf("Valor total ate agora: %.2f\n", valor);
        printf("Deseja continuar as operacoes? 1 - Sim / 2 - Nao");
        scanf("%d", &op);
        






    }while(op != 1);


    return 0;
}