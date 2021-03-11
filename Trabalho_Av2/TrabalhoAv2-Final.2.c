#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int sexo,SIH,SIM,QTDH,QTDM,QTDOVCL,IdadeMNV,i;
char COA = 'A';
char COV = 'V';
char COC = 'C';
char CDCL = 'L';
char CDCC = 'C';
char CDCP = 'P';
char Resp = 'S';
float MediaIDH,MediaIDM;
char NomeMNV;
int idade[10];
char nome[40];

QTDH = 0;
QTDM = 0;
SIH = 0;
SIM = 0;
QTDOVCL = 0;
MediaIDH = 0;
MediaIDM = 0;


while(Resp == 'S'){
        printf("Informe o seu nome: \n");
        scanf("%s",nome);
        getchar();
        printf("Informe o seu sexo: 1-Masculino , 2-Feminino: \n");
        scanf("%d",&sexo);
        printf("Informe a cor dos olhos: A-Azuis, V-Verdes, C-Castanhos \n");
        scanf("%c%c%c",&COA,&COV,&COC);
        printf("Informe a cor do seu cabelo: L-Louros, CS-Castanhos, P-Pretos \n");
        scanf("%c%c%c",&CDCL,&CDCC,&CDCP);
        printf("Informe a sua idade: \n");
        scanf("%d",&idade[i]);
        printf("Deseja informar mais um numero:(S/N) \n");
        scanf("%s",&Resp);
        }
        if(sexo == 1){
        QTDH = QTDH + 1;
        SIH = SIH + idade;
        }
    if(sexo == 2){
        QTDM = QTDM + 1;
        SIM = SIM + idade;
        }
    if(QTDH > 0){
        MediaIDH = SIH/QTDH;

        }

    if(QTDM > 0){
        MediaIDM = SIM/QTDM;

        }

    IdadeMNV = idade[0];

    if(idade[i] < IdadeMNV){
        IdadeMNV = idade[i];

        }

    if(COV == 'V' && CDCL == 'L'){
        QTDOVCL = QTDOVCL + 1;

        }
        printf("A media de idade dos homens eh: %0.2f \n",MediaIDH);
        printf("A media de idade das mulheres eh: %0.2f \n",MediaIDM);
        printf("A idade do habitante mais novo eh: %d \n",IdadeMNV);
        printf("A quantidade de pessoas com os olhos verdes e cabelos loiros eh: %d \n",QTDOVCL);
}
