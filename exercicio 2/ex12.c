#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, h, area, p;
    printf("Digite os valores dos lados do possivel traingulo: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a < c + b && c < a + b && b < a + c ){
        // isoceles
        if((a == b && a != c) || (a == c && a != b) || (c == b && c != a) || (b == a && b != c)){
            if(a > b || a> c){
                h = pow(b,2) + pow(a/2, 2);
                area = (b * h)/2;
            }
            else if(b > a || b > c){
                h = pow(a,2) + pow(b/2, 2);
                area = (a * h)/2; 

            }
            else{
                h = pow(b,2) + pow(c/2, 2);
                area = (b * h)/2; 
            }
        }
        //  equilatero
        else if(a == b && c == b){
            area = (pow(a, 2) * sqrt(3)) / 4;
        }
        //  Escaleno
        else{
            p = (a + b + c)/2;
            area = sqrt(p*(p - a)*(p - b)*(p - c));
        }

    }
    else{
        printf("Os lados %d, %d e %d nao formam um triangulo!", a, b, c);
    }


    return 0;
}