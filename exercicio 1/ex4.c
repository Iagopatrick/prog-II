#include <stdio.h>

int main(){
    float n = 0, x;

    for (int i = 1; i <= 3; i++){
        printf("Digite o valor do numero %d\n", i);
        scanf("%f",&x);
        n += x;
    }
    
    printf("A media e %.3f", n/3);
    return 0;
}