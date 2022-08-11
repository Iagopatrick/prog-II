#include <stdio.h>

int main(){
    int x;
    printf("Digite um valor qualquer\n");
    scanf("%d", &x);
    if(x%10 == 0 || x%2 == 0 || x%2 == 0){
        if(x%10 == 0){
            printf("\n%f e divisivel por 10\n", x);   
        }

        if(x%5 == 0){
            printf("%f e divisivel por 5\n", x);   
        }

        if(x%2 == 0){
            printf("%f e divisivel por 2\n", x);   
        }
    }

    else{
        printf("%f nao e divisivel por 10, 5 ou 2\n", x);   
    }

    return 0;
}