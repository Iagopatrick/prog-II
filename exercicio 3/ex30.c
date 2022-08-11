#include <stdio.h>
#include <math.h>

int main(){
    int a, op, b, c;
    
    do{
        printf("Digite os 20 primeiros numeros. Digite 0 para terminar ou digite os 20 primeiros para ter a opcao de finalizar\n");
        printf("Numero digitado | x^2 | x^1/2 |");
        for(int n = 0; n < 21; n++){
            scanf("%d", &a);
            b = pow(a,2);
            c = sqrt(a);
            printf("| %d | \t", a);
            printf("%d | \t", b);
            printf("%d | \n", c);
        }
        printf("Deseja finalizar? 1 - sim | 2 - nao: \n");
        scanf("%d", &op);


    }while(op == 2);





    return 0;
}