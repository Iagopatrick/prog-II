#include <stdio.h>
#include <string.h>


int main(){
    float qntdM = 0, qntdH = 0;
    float h, hmaior = 0, hmenor = 800000, mediaT = 0, mediaM = 0;
    char sexo[2], maior[2], menor[2];

    for(int i = 0; i < 50; i++){
        
        

        printf("digite o sexo do entrevistado(a) como F - feminino ou M - masculino:: \t");
        
        scanf("%s", sexo);
        getchar();

        printf("Digite a altura do entrevistado(a): \t");
        scanf("%f", &h);

        switch(sexo[0]){
            case 'F':
                mediaM += h;
                qntdM += 1; 
                break;
            case 'f':
                mediaM += h;
                qntdM += 1; 
                break;

        }
        
        mediaT += h;
        qntdH += 1;

        if(h > hmaior){
            hmaior = h;
            maior[0] = sexo[0];
        }
        if(h < hmenor){
            hmenor = h;
            menor[0] = sexo[0];
        }


    }

    printf("%c tem a maior altura, com %.2f de altura!\n", maior[0], hmaior);
    printf("%c tem a menor altura, com %.2f de altura!\n", menor[0], hmenor);
    printf("A media das mulheres e: %.2f\n", mediaM/qntdM );
    printf("A media das turmas e: %.2f\n", mediaT/qntdH );
    

    return 0;
}