#include <stdio.h>

int main(){
    float f = 1;
    int n, fatorial = 1;
    do{
        printf("Digite o valor desejado: ");
        scanf("%d", &n);

    }while(n < 1 || n > 5);

    for(int i = 1; i <= n; i++){
        fatorial = i * fatorial;
        
        
        f = f + 1.0/fatorial;
    }
    
    printf("Valor da equacao f: %.2f", f);





    return 0;
}