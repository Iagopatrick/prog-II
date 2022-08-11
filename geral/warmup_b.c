#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &n, &m);
    
    if(n < 2025 && m < 2025){
        printf("1000\n");
    }
    if(n < 3025 && m < 3025){
        printf("1000\n");
        printf("2025\n");
    }
    if(n < 9801 && m < 9801){
        printf("1000\n");
        printf("2025\n");
        printf("3025\n");
    }
    if(n < 9999 && m < 9999){
        printf("1000\n");
        printf("2025\n");
        printf("3025\n");
        printf("9801\n");

    }


    return 0;
}