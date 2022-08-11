#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // FILE *arq;
    // arq = fopen("textqst6.txt", "r");
    // int id, jd, aux, maior,contador[26] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
    // char alfabetom[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // char alfabetoM[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // if(arq == NULL){
    //     printf("Erro na abertura do arquivo.\n");
    //     system("pause");
    //     exit(1);
    // }

    // while(!feof(arq)){
    //     char letra = fgetc(arq);
    //     for(id = 0; id < 26; id++){
    //         if(letra == alfabetom[id] || letra == alfabetoM[id]){
    //             contador[id] += 1;
    //         }
    //     }
    // }
    // fclose(arq);

    // maior = contador[0];
    // for(id = 1; id < 26; id++){
    //     for(jd = 0; jd < id; jd++){
    //         if(contador[id] > contador[jd]){
    //             aux = contador[id];
    //             contador[id] = contador[jd];
    //             contador[jd] = aux;
    //         }
    //     }
    // }

    // for(id = 0; id < 26; id++){
    //     printf("%d\n", contador[id]);
    // }

    // fclose(arq);
    int i, tamanho;
    char pl[5] = "mirim";
    fgets(pl, 20, stdin);
    tamanho = strlen(pl) - 1;
    for(i = 0; i < tamanho/2; i++){
        if(pl[i] != pl[tamanho - i]){
            printf("erro");
        }
        else{
            printf("ok");
        }
    }








    return 0;
}