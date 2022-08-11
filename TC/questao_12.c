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
    FILE *arq12;
    char cadeia_de_caractere[120];
    int i, j, tamanho_string, retorno;

    arq12 = fopen("ex12.txt", "w");
    confereabertura(arq12);

    printf("Digite uma palavra: \n");
    fgets(cadeia_de_caractere, 120, stdin);
    
    tamanho_string = strlen(cadeia_de_caractere);
    
    
    // O i tem o valor do tamanho_string - 2 por conta do \n e para não chegar em um endereço vazio
    // o i diminui até 0, quando o j imprime somente a primeira letra e o programa para
    for(i = tamanho_string - 2; i >= 0; i--){
        // o for do j imprime todos os caracteres até o valor de i
        for(j = 0; j <= i; j++){
            fputc(cadeia_de_caractere[j], arq12);
        }
        if(i > 0){
            // esse if evita que seja colocado uma linha vazia no arquivo
            fputc('\n', arq12);
        }
    }
   


    retorno = fclose(arq12);
    conferefechamento(retorno);
    return 0;
}