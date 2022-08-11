#include <stdio.h>


void verifica(float x, float y){
    if (x>0 && y>0){
        printf("I");
    }
    else if(x<0 && y>0){
        printf("II");
    }
    else if(x<0 && y<0){
        printf("III");
    }
    else if(x>0 && y<0){
        printf("IV");
    }
    else {
        printf("EIXOS");
    }
}

int main(){
    float x, y;
    scanf("%f", &x);
    scanf("%f", &y);
    verifica(x, y);
}