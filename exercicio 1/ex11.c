#include <stdio.h>

int main(){
    int numero, inverte1, inverte2, inverte3, nuNovo;
    do
    {
        printf("Digite um valor, que tenha 3 digitos, positivo e inteiro: \n");
        scanf("%d", &numero);

    } while (numero < 100 || numero > 999);
    
    inverte1 = numero/100;
    inverte2 = numero%10;
    inverte3 = numero - (inverte1 * 100) - inverte2;
    nuNovo = inverte1 + (inverte2*100) + inverte3;

    printf("numero novo e: %d", nuNovo);

    return 0;
}