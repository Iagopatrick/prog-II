/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void confereabertura(FILE *arq){
    // Confere se o arquivo foi aberto corretamente
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

void conferefechamento(int retorno){
    if(retorno != 0){
        // Confere se o arquivo foi fechado corretamente
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}




int main(){
    FILE *arq11;
    char cadeia_de_caractere[120];
    int i, j, tamanho_string, retorno;

    arq11 = fopen("questao_11.txt", "w");
    confereabertura(arq11);

    printf("Digite uma palavra: \n");
    fgets(cadeia_de_caractere, 120, stdin);
    // Recebe o tamanho da string, com \n
    tamanho_string = strlen(cadeia_de_caractere);
    

    for(i = 0; i < tamanho_string - 1; i++){
        // o for do j escreve os caracteres até o valor de i, que vai aumentando a cada for
        for(j = 0; j <= i; j++){
            fputc(cadeia_de_caractere[j], arq11);
        }
        if(i != tamanho_string - 2){
        // esse if evita que seja colocado uma linha vazia no arquivo
            fputc('\n', arq11);
        }
    }

    retorno = fclose(arq11);
    conferefechamento(retorno);

    return 0;
}