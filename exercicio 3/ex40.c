#include <stdio.h>
#include <math.h>

int main(){
    int x, y, n, s1 = 0, s2 = 0, s3 = 0, i;
    
    scanf("%d %d %d", &x, &n, &y);
    for(i = 0; i < n; i++){
        s1+= x;
    }
    i = 0;

    for(i = 0; i < n; i++){
        s2+= x*y;
    }

    i = 0;

    for(i = 0; i < n; i++){
        s3+= pow(x,2);
    }

    printf("somatorio 1: %d  somatorio 2:  %d  somatorio 3: %d ", s1, s2, s3);

    return 0;
}
