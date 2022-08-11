#include <stdio.h>

int main(){
    int numero, inverte1, inverte2, inverte3;
    do
    {
        printf("Digite um valor, que tenha 4 digitos, positivo e inteiro: \n");
        scanf("%d", &numero);

    } while (numero < 1000 || numero > 9999);
    

    printf("\n%d", numero/1000);
    inverte1 =  numero/100 - ((numero /1000)*10);
    printf("\n%d", inverte1);
    inverte2 = numero/10 - (numero/100)*10;
    printf("\n%d", inverte2);
    inverte3 = numero%10;
    printf("\n%d", inverte3);

    return 0;
}