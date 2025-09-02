/*Elabore um programa que
calcule a média ponderada de n elementos.
Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final.*/
#include <stdio.h>
int main(){
    int i,n,peso;
    float valor,mediaPonderada,somaValores = 0,somaPesos =0;
    printf("Insira a quantidade de elementos que deseja fazer a media: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Insira o valor do elemento %d: ",i);
        scanf("%f",&valor);
        printf("Insira o peso do elemento %d: ",i);
        scanf("%d",&peso);
        somaPesos += peso;
        somaValores += valor*peso;
    }
        mediaPonderada = somaValores/somaPesos;
    printf("A media ponderada dos termos eh: %.2f",mediaPonderada);
}