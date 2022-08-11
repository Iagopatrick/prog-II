#include <stdio.h>

int main(){
    int fatorial = 1, x, n, i;
    printf("Digite o numero de execucao do programa: \n");
    scanf("%d", &n);

    for(int h = 0; h < n; h++){
        printf("Digite o numero: \t");
        scanf("%d", &x);
        fatorial = 1;
        for(i = 1; i <= x; i++){
                if(x == 0){
                    fatorial = 1;
                }
                else{
                    fatorial = i * fatorial;
                }
            }

        printf("| numero digitado | fatorial do numero |\n");
        printf("|     %.2d           |      %.2d          |\n", x, fatorial);
        
    }
    


    return 0;
}