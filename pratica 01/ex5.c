#include <stdio.h>

int main(){
    float s = 1;
    int n, fatorial = 1;
    printf("Digite o valor desejado: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial = i * fatorial;
        // printf("s: %.2f %d ", s, fatorial);
        
        s = s + 1.0/fatorial;
    }
    
    printf("Valor da equacao s: %.2f", s);





    return 0;
}