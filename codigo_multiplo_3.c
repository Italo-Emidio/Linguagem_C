#include <stdio.h>

void main(){

    int num, i, p, m;

    p = 0;
    m = 0;

    for(;;){
    printf("Digite os numeros: \n");
    scanf("%d", &num);
            if (num <0)
            break;
            p++;

        if(num %3 == 0){
        printf("O numero eh multiplo de 3: \n");
            m++;
        }
        else{
        printf("O numero nao eh multiplo de 3: \n");

        }

    }
    printf("Os numeros positivos foram: %d \n", p);
    printf("A quantidade de multiplos de 3 foram: %d \n", m);
}

