/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/
#include <stdio.h>
#include <stdlib.h>


void confereabertura(FILE *arq){
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

void conferefechamento(int retorno){
    if(retorno != 0){
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}



int main(){
    FILE *arq9;
    char auxiliar;
    int retorno;


    arq9 = fopen("ex09.txt", "r");
    confereabertura(arq9);

    while(auxiliar != EOF){
        auxiliar = fgetc(arq9);
        printf("%c", auxiliar);
    }
    
    retorno = fclose(arq9);
    conferefechamento(retorno);


    return 0;
}