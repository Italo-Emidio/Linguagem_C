#include <stdio.h>

int main(){

int QTDH,QTDM,SIH,SIM,idade,i;
int sexo,celular;
float MediaH,MediaM;
int cel[10];
int id[10];

QTDH = 0;
QTDM = 0;
SIH = 0;
SIM = 0;

for(i=0;i<5;i++){
    printf("Informe a idade: \n");
    scanf("%d",&idade);
    printf("Informe o sexo: 1-Masculino, 2-Feminino \n");
    scanf("%d",&sexo);
    printf("Informe o celular: \n");
    scanf("%d",&celular);

    if(sexo == 1){
        QTDH = QTDH+1;
        SIH = SIH + idade;
        id[QTDH] = idade;
        cel [QTDH] = celular;
        }
    if(sexo == 2){
        QTDM = QTDM+1;
        SIM = SIM + idade;
        }
    }

    if(QTDH > 0){
        MediaH = SIH/QTDH;
        printf("A media de idade dos homens: %f \n",MediaH);
    }

    if(QTDM > 0){
        MediaM = SIM/QTDM;
        printf("A media idade das mulheres: %f \n",MediaM);
    }

    printf("A quantidade de homens eh: %d \n",QTDH);
    printf("A quantidade de mulheres eh: %d \n",QTDM);
    printf("Idade e celular dos homens: \n");

    for(i=1;i<5;i++){
        printf("A idade: %d",id[i]);
        printf("Os celulares: %d",cel[i]);
        printf("\n");
    }
}



