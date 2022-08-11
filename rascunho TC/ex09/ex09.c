/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/
#include <stdio.h>
#include <stdlib.h>


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
    FILE *arq9;
    char caracter, nome_arq[20];
    int retorno;
    // Solicita o nome do arquivo, caso esteja errado, a função confere irá terminar o programa
    printf("Digite o nome do arquivo com o .txt: \n");
    scanf("%s", &nome_arq);

    arq9 = fopen(nome_arq, "r");
    confereabertura(arq9);

    while(caracter != EOF){
        // printa cada caracter do arquivo até quando o 'caracter' receber o valor EOF, que significa que o arquivo terminou
        caracter = fgetc(arq9);
        printf("%c", caracter);
    }
    
    retorno = fclose(arq9);
    conferefechamento(retorno);


    return 0;
}