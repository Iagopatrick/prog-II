#include <stdio.h>

int main(){
    float metro, kilometro;
    printf("Coloque o valor da velocidade em m/s: \n");
    scanf("%f", &metro);
    kilometro = metro * 3.6;
    printf("O valor de %.2f m/s e %.2f km/h", metro, kilometro);
    



    
    return 0;

}
