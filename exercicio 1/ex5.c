#include <stdio.h>

int main(){
    float n1, n2;
    printf("Digite o valor da primeira nota\n");
    scanf("%f", &n1);
    printf("Digite o valor da segunda nota\n");
    scanf("%f", &n2);

    printf("O valor da media e %f", ((n1*3)+(n2*7))/(7+3));



   return 0; 
}