#include <stdio.h>

int main(){
    int a, b;
    printf("Digite dois valores para conferir se são multiplos ou nao\n");
    scanf("%d", &a);    
    scanf("%d", &b);    
    if(a % b == 0 || b % a == 0){
        printf("\nSao multiplos!");
    }
    else{
        printf("\n Nao sao multiplos!");
    }

    return 0;
}