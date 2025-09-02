/*Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/
#include <stdio.h>

void somaMedia(int n, int *soma, float *media);

int main(){
    int n,soma;
    float media;
    printf("Insira um numero: ");
    scanf("%d",&n);
    somaMedia(n, &soma, &media);
    printf ("\n\nSoma = %d\n", soma);
	printf ("\nMedia = %.2f\n", media);
}
void somaMedia(int n, int *soma, float *media){
    int i,quant=0,somaDivisores=0;
    for(i=1; i<=n; i++){
        if(n%i==0){
            somaDivisores+=i;
            quant++;
        }
    }
    *soma=somaDivisores;
    *media=(float)somaDivisores/quant;
}