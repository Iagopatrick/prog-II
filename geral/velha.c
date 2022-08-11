#include <stdio.h>

void get_computer_move(char tabuleiro[4][4]){
    
    int i, j, status = 0;
    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
        if(tabuleiro[i][j]  == ' ' && status == 0){
            status = 1;
            tabuleiro[i][j] = 'O';
        }
    }
    }
    if(status == 0){
        printf("Empate!");
    }

}


char get_player_move(char tabuleiro[4][4]){
    int linha, coluna, confere = 0;
    do{
        do{
            printf("Digite o numero correspondente a linha da sua jogada (1 a 3)\t");
            scanf("%d", &linha);
        }while(linha < 1 && linha > 3);

        do{
            printf("Digite o numero correspondente a coluna da sua jogada (1 a 3)\t");
            scanf("%d", &coluna);
        }while(coluna < 1 && coluna > 3);

        if(tabuleiro[linha][coluna] == ' '){
            tabuleiro[linha][coluna] = 'X';
            confere = 1;
        }
        else{
            printf("\nCasa invalida!\n");
        } 
    }while(confere == 0);
    
}

int check(char tabuleiro[4][4]){
    int i, j, vencedor = 0;
    char simbolo;
    for(i = 1; i < 4; i++){
        if(tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][1] == tabuleiro[i][3] && tabuleiro[i][1] != ' '){
                vencedor = 1;
                simbolo = tabuleiro[i][1];
                printf("\n%c venceu!\n", simbolo);
                return vencedor;
            }
    }
    for(i = 1; i < 4; i++){
        if(tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[1][i] == tabuleiro[3][i] && tabuleiro[1][i] != ' '){
                vencedor = 1;
                simbolo = tabuleiro[1][i];
                printf("\n%c venceu!\n", simbolo);
                return vencedor;
            }
    }
    if(tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[1][1] == tabuleiro[3][3] && tabuleiro[1][1] != ' '){
        vencedor = 1;
        simbolo = tabuleiro[1][1];
        printf("\n%c venceu!\n", simbolo);
        return vencedor;
    }
    if(tabuleiro[3][1] == tabuleiro[2][2] && tabuleiro[3][1] == tabuleiro[1][3] && tabuleiro[3][1] != ' '){
        vencedor = 1;
        simbolo = tabuleiro[3][1];
        printf("\n%c venceu!\n", simbolo);
        return vencedor;
    }
    

    
    return vencedor;


}

void disp_matrix(char tabuleiro[4][4]){
    int i, j;
    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            printf("%c | ", tabuleiro[i][j]);
        }
        printf("\n");
        printf("- + - + -\n");
    }
}


int main(){
    char tabuleiro[4][4] = {'z', 'z', 'z', 'z',
                            'z', ' ', ' ', ' ',
                            'z', ' ', ' ', ' ',
                            'z', ' ', ' ', ' '}; 
    int vencedor, i = 0;
    do{

        disp_matrix(tabuleiro);
        get_player_move(tabuleiro);
        vencedor = check(tabuleiro);
        if(vencedor != 1){
            get_computer_move(tabuleiro);
        }
        vencedor = check(tabuleiro);
        // disp_matrix(tabuleiro);
        
    }while(vencedor != 1 && i < 10);
    disp_matrix(tabuleiro);
}