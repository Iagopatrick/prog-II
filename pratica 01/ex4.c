#include <stdio.h>

int main(){
    int n, fatorial = 1;
    
    do
    {
        printf("Digite o valor do fatorial que voce deseja: ");
        scanf("%d", &n);
    } while (n < 0);
    
    if (n == 0){
        fatorial = 1;
    }
    else{
        for(int i = 1; i <= n; i++){
            fatorial = i * fatorial;
        }
    }
    

    printf("%d", fatorial);

    return 0;
}