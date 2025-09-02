/*Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y].*/
#include <stdio.h>
#define numeros 100
int main(){
    float x,numero,soma,subtracao;
    int i,y,cont = 0;
    printf("Insira o valor de um numero real x: ");
    scanf("%f",&x);
    printf("Insira o valor de um numero inteiro y: ");
    scanf("%d",&y);
    for(i=1;i<=numeros;i++){
        printf("Insira o valor do numero real %d: ",i);
        scanf("%f",&numero);
        soma = x+y;
        subtracao = x-y;
        if(numero >=subtracao && numero <=soma){
            cont++;
        }
    }
    printf("Dos numeros digitados %d. estao no intervalo [%.2f , %.2f]",cont,subtracao,soma);
}