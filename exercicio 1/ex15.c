#include <stdio.h>


int main(){
    float r, g, pi;
    pi = 3.14159;
    do
    {
        printf("Coloque o angulo, em graus: \n");
        scanf("%f", &g);
    } while (g < 0);
    
    r = (g * pi)/180.0;
    printf("\n%.2f em graus e, em radianos: %.4f", g,r);

    return 0;
}