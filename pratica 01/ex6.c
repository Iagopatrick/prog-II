#include <stdio.h>

int main(){
    int n;
    float s = 0, s1;
    do
    {
        printf("\nEscolha um valor inteiro para consultar o caixa\n");
        printf("1- Consultar Saldo\n");
        printf("2- Saque\n");
        printf("3- Deposito\n");
        printf("4- Sair\n");
        scanf("%d", &n);
        switch (n){
        case 1:
            printf("\nSeu saldo e: %.2f", s);
            break;
        case 2:
            printf("\nDigite quanto voce quer sacar, o valor disponivel e %.2f\n", s);
            scanf("%f", &s1);
            if(s - s1 < 0 ||  s1 == 0){
                printf("\nValor indisponivel, digite um valor valido!");
            }
            else{
                s = s - s1;
                printf("\nSeu saldo novo e %.2f\n", s);
            }

            break;
        case 3:
            printf("\nSelecione o valor para depositar: ");
            scanf("%f", &s1);
            if(s1<=0){
                printf("\nValor inválido!");
            }
            else{
                s = s + s1;
                printf("\nSeu novo saldo e de %.2f", s);
            }
            break;
        case 4:
            printf("\nObrigado, volte sempre!");
            break;
        
        default:
            break;
    }


    } while (n != 4);
    



    return 0;
}