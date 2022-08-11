// ex1.c

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    // é preciso receber dados, por isso um scanf para cada nota:
    // não irei usar o for para utilizar os parametros existentes
    printf("Digite as 3 nota: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media=nota1+nota2+nota3/3.0;
    printf("media = %.2f\n",media);
    printf("nota1 = %.2f\n", nota1);
    printf("nota2 = %.2f\n", nota2);
    printf("nota3 = %.2f\n", nota3);
return 0;
}