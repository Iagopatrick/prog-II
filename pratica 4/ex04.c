#include <stdio.h>

float media(float a, float b, float c){
    float m;
    m = a + b + c;
    return m/3.0;
}

int main(){
    int matricula, i = -1;
    float notas[4], M;
    
    do{
        printf("Digite a matrciula do aluno \t");
        scanf("%d", &matricula);
    }while(matricula > 9999 && matricula < 1);

    do{
        i++;
        printf("Digite a nota %d do aluno\t", i+1);
        scanf("%f", &notas[i]);

    }while(notas[i] != -1);
    M = media(notas[0], notas[1], notas[2]);

    printf("O aluno com matricula %d tem a media de: %.2f\n", matricula, M);

    return 0;
}