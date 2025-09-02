/*Faça um programa que leia
150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 51° ao 100°
valores fornecidos;
c) A média entre os últimos 50
valores.*/
#include <stdio.h>
#define numeros 150

int main(){
    int i;
    float numero,somaPrimeiros50 = 0,somaUltimos50 = 0,menor,media;
    for(i=1;i<=numeros;i++){
        printf("Insira o numero %d: ",i);
        scanf("%f",&numero);
        if(i<=50){
            somaPrimeiros50+=numero;
        }
        if(i > 50 && i<=100){
            if(numero < menor || i == 51){
                menor = numero;
            }
        }
        if(i>100 && i<=150){
            somaUltimos50+= numero;
        }
    }
    media = somaUltimos50/50;
    printf("A soma dos 50 primeiros numeros eh: %.2f",somaPrimeiros50);
    printf("O menor numero do 51° ao 100° eh: %.2f",menor);
    printf("A media entre os ultimos 50 numeros eh: %.2f",media);
}