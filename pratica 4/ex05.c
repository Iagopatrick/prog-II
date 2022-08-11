#include <stdio.h>

float areac(float d){
    float raio, pow;
    raio = d/2;
    pow = raio * raio;
    return  pow * 3.14159;
}

int main(){
    float diam, area;
    do{
        printf("Digite o valor do diametro: \t");
        scanf("%f", &diam);
    }while(diam < 0);

    area = areac(diam);
    printf("A area e: %.2f", area);



    return 0;
}