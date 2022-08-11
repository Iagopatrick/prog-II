#include <stdio.h>

int main()
{
    int numero, divisores = 1;
    
    for(numero = 92; numero <= 1478; numero ++){
        
        if(numero % 2 != 0 && numero % 5 != 0 && numero % 3 != 0 && numero % 11 != 0){
            divisores *= numero;

        }

    }

    printf("%d", divisores);
    return 0;
}