#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, d;
    printf("Digite o X da primeira coordenada\n");
    scanf("%f", &x1);
    printf("Digite o Y da primeira coordenada\n");
    scanf("%f", &y1);
    printf("Digite o X da segunda coordenada\n");
    scanf("%f", &x2);
    printf("Digite o Y da segunda coordenada\n");
    scanf("%f", &y2);

    d = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

    printf("A distancia entre os dois pontos e %.2f", d);
    return 0;
}