#include <stdio.h>


int soma(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mult(int a, int b){
    return a*b;
}

float div(float a, float b){
    if(b == 0){
        printf("Divisao por zero: ERRO!");
        return 0;
    }
    else{
        return a/b;
    }
}

int main(){
    int x, y;
    char s[2];
    printf("Digite os valores: \t");
    scanf("%d %d", &x, &y);
    printf("\n Digite a operacao desejada: \n");

    scanf("%s", &s);
    getchar();

    switch(s[0]){
        case '+':
            printf("%d", soma(x, y));
            break;
        case '-':
            printf("%d", sub(x, y));
            break;
        case '*':
            printf("%d", mult(x, y));
            break;
        case '/':
            printf("%.3f", div(x, y));
            break;


    }
    return 0;

}

