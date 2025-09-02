/*Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/
#include <stdio.h>
#define quant 300
int main(){
    int i,contNegativo = 0, contPositivo = 0,numero,somaPositivos=0;
    float mediaPositivos;
    for(i=1;i<=quant;i++){
        printf("Digite o numero %d: ",i);
        scanf("%d",&numero);
        if(numero < 0){
            contNegativo++;
        }
        if(numero > 0){
            contPositivo++;
            somaPositivos+=numero;
        }
    }
    if(contPositivo > 0){
    mediaPositivos = (float)somaPositivos/contPositivo;
    }
    printf("Foram digirados %d numeros positivos!\n",contPositivo);
    printf("Foram digirados %d numeros negativos!\n",contNegativo);
    printf("A media dos numeros positivos eh: %.2f!",mediaPositivos);
}