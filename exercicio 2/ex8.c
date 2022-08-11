#include <stdio.h>

int main(){
    int x;
    for(int i = 0; i < 5; i++){
        printf("Digite um valor:");
        scanf("%d", &x);
        if( x == 0){
            printf("Esse numero e neutro.\n");
        }
        else if(x < 0){
            printf("Esse numero e negativo.\n");
        }
        else{
            printf("Esse numero e positivo. \n");
        }
    }



    return 0;
}