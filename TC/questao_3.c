/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/

#include <stdio.h>
#include <string.h>

struct products {
    int cod;
    int qntd;
    float preco;
};

void lista(struct products prod[15], int num_comparacao){
    // função para listar cada item do struct, conforme o item de comparação
    int i;
    for(i = 0; i < 15; i++){
        if(prod[i].preco > num_comparacao){
            printf("Codigo: %d\n", prod[i].cod);
            printf("Quantidade do produto: %d und\n", prod[i].qntd);
            printf("Preco do produto (unidade): RS %.2f\n", prod[i].preco);
        }
    }
}

int main(){
    int i, codigo_consulta, temp;
    float media = 0, qntd_media = 0, mediafinal= 0;
    struct products prod[15];

    // a)
    for(i = 0; i < 15; i++){
        // É pedido cada dado, com o devido tratamento
        do{
            printf("Digite o codigo do produto: \n");
            scanf("%d", &prod[i].cod);
        }while(prod[i].cod <= 0);
        
        do{
            printf("Digite a quantidade do produto: \n");
            scanf("%d", &prod[i].qntd);
        }while(prod[i].qntd < 0);
        
        do{
            printf("Digite o preco do produto: \n");
            scanf("%f", &prod[i].preco);
        }while(prod[i].preco <= 0);

        if(prod[i].preco > 10){
            media = prod[i].preco;
            qntd_media += prod[i].qntd;
        }
    }
    // b)
    do{
        printf("Digite o codigo do produto que deseja consultar: \n");
        scanf("%d", &codigo_consulta);
        // A variavel temporaria auxilia no swtich
        temp = 15; 
        for(i = 0; i < 15; i++){
            /* Percorre-se todo o vetor, a procura do codigo do livro, caso seja válido, a variavel temporaria auxiliar
            que recebe o valor do indice no qual está o codigo e coloco na tela as informações nele contido.*/
            if(codigo_consulta == prod[i].cod){
                temp = i;
            }
        }
        switch(temp){
            // Padrozina a escolha com o auxiliar
            case 15:
            if(codigo_consulta != -1){
                printf("Digite um codigo valido!\n");
            }
            break;
            case 0 ... 14:
            printf("Codigo escolhido: %d\n", prod[i].cod);
            printf("Quantidade do produto: %d und\n", prod[i].qntd);
            printf("Preco do produto (unidade): RS %.2f\n", prod[i].preco);
            break;
        }

    }while(codigo_consulta != -1);
    // c)
   
    printf("Lista de produtos com preco superior a RS 15,00: \n");
    lista(prod, 15);


    // d)
    
    if(qntd_media != 0){
        // Tratamento caso a quantidade seja 0, para nao existir divisão por zero.
        // Como a variavel mediafinal é 0 por padrão, ela so tem um valor difenrente de zero se a qntd for > 0.
        mediafinal = media/qntd_media;
    }
    printf("A media dos produtos que custam mais de RS 10,00 e %.2f e a quantidade e %.2f\n", mediafinal, qntd_media);

    // e)
    printf("Lista de produtos com preco superior a RS 10,00: \n");
    lista(prod, 10);

    return 0;
}