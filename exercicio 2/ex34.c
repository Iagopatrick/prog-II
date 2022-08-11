#include <stdio.h>
#include <string.h>

int main(){
    float precoNormal, pFinal = 0;
    char d[2];
    char m[4];

    printf("digite o valor da entrada normal: \n");
    scanf("%f", &precoNormal);

    printf("Digite o dia da semana (Apenas com a primeira letra): \n");
    gets(d);

    if(d[1] == 'S' || d[1] == 'T' || d[1] == 'Q'){
        pFinal += precoNormal - (precoNormal * 0.25);
    }
    printf("E dia de musica ao vivo? Sim ou Nao: \n");
    gets(m);

    if(m[1] == 'S'){
        pFinal += precoNormal * 0.15;
    }

    printf("\n preco final e %0.2f", pFinal);


    return 0;
}