/*QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/
#include <stdio.h>
#define TAM_MAX 50
int verificarVetor(float vetor[],int tamanho);
int main(){
    int i,tamanho;
    float vetor[TAM_MAX],resultado;
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%f",&vetor[i]);
        printf("%.1f ",vetor[i]);
    }
    resultado = verificarVetor(vetor,tamanho);
    if(resultado == 1){
        printf("O vetor esta ordenado em ordem crescente!");
    }else{
        printf("O vetor nao esta ordenado em ordem crescente!");
    }
}

int verificarVetor(float vetor[],int tamanho){
    int i,cont=0;
    for(i=0;i<tamanho-1;i++){
        if(vetor[i] > vetor[i+1]){
            return 0;
        }
    }
    return 1;
}
