/*Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano*/
#include <stdio.h>
int main(){
    int dia,mes,diasdoAno=0;
    int diasporMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Insira o dia: ");
    scanf("%d",&dia);
    printf("Insira o mês: ");
    scanf("%d",&mes);
    for(int i=0;i<mes-1;i++){
        diasdoAno+=diasporMes[i];
    }
    diasdoAno+=dia;
    printf("A data %02d/%02d é o %d dia do ano.\n",dia,mes,diasdoAno);
}