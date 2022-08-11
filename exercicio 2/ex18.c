#include <stdio.h>
#include <string.h>

int main(){
    float nota, notas = 0;
    int nNotas;
    char str[11];

    printf("digite seu nome (Maximo de 11 caracteres!)\n");
    gets(str);

    printf("Digite a quantidade de notas: \n");
    scanf("%d", &nNotas);
    for(int i = 1; i <= nNotas; i++){
        printf("Digite a nota %d",i);
        scanf("%f", &nota);
        notas += nota;

    }
    printf("A media do aluno %s e: %f", str, notas/nNotas);

    return 0;
}