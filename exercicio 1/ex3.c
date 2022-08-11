#include <stdio.h>

int main(){
    int n = 0, x;

    for (int i = 1; i <= 3; i++){
        printf("Digite o valor do numero %d\n", i);
        scanf("%d",&x);
        n += x;
    }
    
    printf("A media e %d", n/3);
    return 0;
}