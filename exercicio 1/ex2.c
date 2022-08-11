#include <stdio.h>

int main(){
    float a;
    printf("Digite um numero\n");
    scanf("%f", &a);
    printf("Sucessor: %.1f Antecessor: %.2f", a + 1.0, a - 1.0);
    return 0;
}