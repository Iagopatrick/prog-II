#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int a, b, c, p;
    char op[2];

    printf("Selecione de qual figura voce quer a area: \n");
    printf("q para a area do quadrado;\n");
    printf("r para a area do retangulo;\n");
    printf("t para a area do triangulo;\n");
    printf("p para a area do trapezio;\n");
    gets(op);
    switch(op[1]){
        case 'q':
            printf("Digite o lado do quadrado, em cm: \n");
            scanf("%d", &a);
            printf("A area e %d cm^2\n", a*a);
        break;
        case 'r':
            printf("Digite os lados do retangulo, em cm: \n");
            scanf("%d", &a);
            scanf("%d", &b);
            printf("A area e %d cm^2\n", a*b);
        break;
        case 't':
            printf("Digite os lados do triangulo, em cm: \n");
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            p = (a + b + c)/2;

            printf("A area e %d cm^2\n", sqrt(p*(p - a)*(p - b)*(p - c)));
        break;
        case 'p':
            printf("Digite os lados do trapezio, em cm: \n");
            scanf("%d", &a);
            scanf("%d", &b);
            printf("Digite a altura do trapezio, em cm:\n");
            scanf("%d", c);
            printf("A area e %d cm^2\n", ((a+b)*c)/2);
        break;
        default:
            printf("Selecao invalida, reinicie o programa.");
        break;




    }



    return 0;
}