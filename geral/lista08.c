#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Ex1
float CUBO(float *x){
    float a;
    a = *x;
    return a * a * a;
}
void ex01(){
    float *x, a;
    scanf("%f", &a);
    x = &a;
    
    printf("%.2f", CUBO(x));
}
// Ex 2



void ex02(){
    float r, *R;
    int i, *I;
    char c, *C;

    scanf("%f", &r);
    scanf("%d", &i);
    getchar();
    scanf("%c", &c);

    R = &r;
    I = &i;
    C = &c;

    printf("Antes: %.2f\n", r);
    printf("Antes: %d\n", i);
    printf("Antes: %c\n", c);

    *R = (*R) * 2;
    *I = (*I) * 2;
    *C = 'D';

    printf("Depois: %.2f\n", r);
    printf("Depois: %d\n", i);
    printf("Depois: %c\n", c);


}
// Ex 03
void troca(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void ex03(){
    int a, b;
    printf("Digite dois valores inteiros: \t");
    scanf("%d %d", &a, &b);
    printf("A = %d; B = %d\n", a, b);

    troca(&a, &b);
    printf("Agora, A = %d e B = %d", a, b);
}

// EX04 e EX5
void Sinal(int *n){
    if(*n < 0){
        printf("NEGATIVO");
    }
    else if(*n > 0){
        printf("POSITIVO");
    }
    else{
        printf("ZERO");
    }
}
void ex04e5(){
    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);
    Sinal(&n);
}

// EX06
float metade(float *a){
    float n;
    return n = *a/2.0;
}
void ex06(){
    float num;
    printf("Digite um valor para dividi-lo pela metade: \t");
    scanf("%f", &num);
    printf("Valor divido: %.2f", metade(&num));
}

// Ex07
float *aloca_array(float *v, int tamanho){
    int i;
    v = (float *) malloc(tamanho * sizeof(float));
    if(v == NULL){
        printf("ERRO! MEMORIA NAO EXISTE!");
        exit(1);
    }
    printf("Digite os valores do array: \n");
    for(i = 0; i < tamanho; i++){
        scanf("%f", &v[i]);
    }
    return v;
}

void posicao(float *v, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
    printf("Endereço do elemento %d: %d\n", i+1, &v[i]);
    }
}
void ex07(){
    float *v;
    v = aloca_array(v, 10);
    posicao(v, 10);
    free(v);

}

// Ex 08
float **aloca_matriz(float **M, int linha, int coluna){
    int i, j;
    M = (float **) malloc(linha * sizeof(float *));
    if(M == NULL){
        printf("ERRO! MEMORIA NAO EXISTE!");
        exit(1);
    } 
    for(i = 0; i < linha; i++){
        M[i] = (float *) malloc(coluna * sizeof(float));
        if(M[i] == NULL){
            printf("ERRO! MEMORIA NAO EXISTE!");
            exit(1);
        }
    }

    printf("Digite os valores da matriz: \n");
    printf("Linha 1: \n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%f", &M[i][j]);
        }
        printf("Linha %d:\n", i+2);
    }
    return M;
}

void posicao_matriz(float **M, int linha, int coluna){
    int i, j;
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Endereco %d %d: %d\t", i+1, j+1, &M[i][j]);
        }
        printf("\n");
    }
}

void ex08(){
    float **M;
    int linha, coluna, i;
    printf("Digite o numero de linhas e colunas da matriz: \n");
    scanf("%d %d", &linha, &coluna);
    M = aloca_matriz(M, linha, coluna);
    posicao_matriz(M, linha, coluna);
    for(i = 0; i < linha; i++){
        free(M[i]);
    }
    free(M);
}

// Ex 09
int *array09(int *v, int tamanho){
    int i;
    v = (int *) malloc(tamanho * sizeof(int));
    if( v == NULL){
        printf("ERRO, MEMORIA NAO EXISTE!");
        exit(1);
    }

    printf("digite os valores do array: \n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
        v[i] *= 2;
    }

    return v;
}

void ex09(){
    int *v, tamanho, i;
    printf("digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);
    v = array09(v, tamanho);
    printf("Vetor dobrado: \n");
    for(i = 0; i < tamanho; i++){
        printf("elemento %d: %d\t", i+1, v[i]);
    }
    free(v);
}

// Ex 10
int *array_10(int *v, int tamanho){
    int i;
    v = (int *) malloc(tamanho * sizeof(int));
    if(v == NULL){
        printf("Erro, memoria inexistente!");
        exit(1);
    }
    printf("Digite os valores do array: \n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
    }
    return v;
}

void ex10(){
    int *v, i, tamanho;
    printf("Digite o tamanho do array: \t");
    scanf("%d", &tamanho);

    v = array_10(v, tamanho);

    for(i = 0; i < tamanho; i++){
        if(v[i] % 2 == 0){
            printf("%d", v[i]);
            printf(", ");
        }
    }
    free(v);

}

// Ex 11
int *array_11(int *v, int tamanho){
    int i;
    v = (int *) malloc(tamanho * sizeof(int));
    if(v == NULL){
        printf("Erro! Memoria nao existe!");
        exit(1);
    }
    printf("Digite os elementos do array: \n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
    }
    return v;
}

int *metade11(int *v, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        if(v[i]/2 >= 1){
            v[i]/= 2;
        }
        else{
            v[i] = 0;
        }
    }
    return v;
}

void ex11(){
    int i, *v, tamanho;
    printf("Digite o tamanho do array: \n");
    scanf("%d", &tamanho);

    v = array_11(v, tamanho);
    printf("Caso a divisão não dê um inteiro, sera trocado por 0. \n");
    for(i = 0; i < tamanho; i++){
        printf("%d, ", v[i]);
    }

    free(v);
}

// Ex 12
float media12(float a, float b, float c){
    return (a+b+c)/3;
}



void ex12(){
    char nome[10];
    float a, b, c, total;
    int i = 0;
    printf("Digite o nome do aluno: \n");
    do{
        getchar();
        fgets(nome, 10, stdin);
        if(strlen(nome) == 4){
            printf("Digite as 3 notas do aluno: \t");
            scanf("%f %f %f",&a, &b, &c);
            printf("O aluno %s, teve a media: %.2f", nome, media12(a, b, c));

        }
        

    }while(strlen(nome) == 4);
}

int main(){
    // ex01();
    // ex02();
    // ex03();
    // ex04e5();
    // ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    // ex11();
    ex12();
    return 0;
}