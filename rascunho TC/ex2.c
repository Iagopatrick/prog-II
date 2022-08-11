/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: Iago Patrick de Melo Gripp Vilas Boas  e Mateus Malta Loss
***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura onde armazenamos os funcionarios
struct funcionarios{
    int matricula;
    char nome[30];
    int dia;
    int mes;
    int ano;
    float salario;
};

//onde coletaremos os dados dos funcionarios
void armazenadados(struct funcionarios f[10]){
    for(int i = 0; i < 10; i++){
        printf("matricula: ");
        scanf("%d", &f[i].matricula);
        printf("nome: ");
        getchar();
        fgets(f[i].nome, 30, stdin);
        printf("dia: ");
        scanf("%d", &f[i].dia);
        printf("mes: ");
        scanf("%d", &f[i].mes);
        printf("ano: ");
        scanf("%d", &f[i].ano);
        printf("salario: ");
        scanf("%f", &f[i].salario);
    }
}

//imprime os dados
void printardados(struct funcionarios f[10], int i){
    printf("Matricula: %d\n", f[i].matricula);
    printf("Nome: %s", f[i].nome);
    if(f[i].dia < 10 && f[i].mes < 10){
        printf("Data admissao: 0%d/0%d/%d\n", f[i].dia, f[i].mes, f[i].ano);
    }
    if(f[i].dia < 10 && f[i].mes >= 10){
        printf("Data admissao: 0%d/%d/%d\n", f[i].dia, f[i].mes, f[i].ano);
    }
    if(f[i].dia >= 10 && f[i].mes >= 10){
        printf("Data admissao: %d/%d/%d\n", f[i].dia, f[i].mes, f[i].ano);
    }
    if(f[i].dia >= 10 && f[i].mes < 10){
        printf("Data admissao: %d/0%d/%d\n", f[i].dia, f[i].mes, f[i].ano);
    }
    printf("Salario: R$%.2f\n", f[i].salario);
}

//verifica se matricula digitada existe no sistema
void consultamatricula(struct funcionarios f[10], int matricula){
    int indice = -2;
    for(int i = 0; i < 10; i++){
        if(f[i].matricula == matricula){
            indice = i;
        }
    }
    if(indice != -2){
        printardados(f, indice);
    }
    else{
        printf("Matricula nao encontrada.\n");
    }
}

//imprime quais funcionarios foram contratados nos ultimos 2 anos
void doisanos(struct funcionarios f[10]){
    printf("Funcionarios contratados nos ultimos dois anos:\n");
    for(int i = 0; i < 10; i++){
        if(f[i].ano == 2020 || f[i].ano == 2021 || f[i].ano == 2022){
            printf("%s", f[i].nome);
        }
    }
}

//calcula e imprime a media salarial da empresa
void mediasalario(struct funcionarios f[10]){
    float media = 0.0;
    for(int i = 0; i < 10; i++){
        media = media + f[i].salario;
    }
    media = media/10.0;
    printf("A media salarial da empresa e de: R$%.2f", media);
}

int main(){
    struct funcionarios f[10];
    int matricula;
    armazenadados(f);
    printf("Matricula que deseja encontrar: ");
    scanf("%d", &matricula);
    while(matricula != -1){
        consultamatricula(f, matricula);
        printf("Matricula que deseja encontrar: ");
        scanf("%d", &matricula);
    }
    doisanos(f);
    mediasalario(f);

    return 0;
}
