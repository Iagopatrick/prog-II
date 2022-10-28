/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: Iago Patrick de Melo Gripp Vilas Boas  e Mateus Malta Loss
***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Verificamos se a abertura do arquivo ocorreu normalmente.
void confereabertura(FILE *arq){
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

//Conferimos se o arquivo foi fechado corretamente.
void conferefechamento(int retorno){
    if(retorno != 0){
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}

int main(){
    int i, limite, retorno;
        FILE *arq;
        //Gera o arquivo "multiplos7.txt".
        arq = fopen("multiplos7.txt","wb");
        confereabertura(arq);

    //Usuario ira digitar qual o número limite.
    printf("Digite o limite: ");
    scanf("%d", &limite);

    //Calcula os multiplos de 7 ate o limite digitado pelo usuario e escreve no arquivo.
    for(i = 1; i < limite; i++){
        if(i%7 == 0){
            fprintf(arq, "%d\n", i);
        }
    }
    retorno = fclose(arq);
    conferefechamento(retorno);

    return 0;
}