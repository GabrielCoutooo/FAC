/*QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).*/
#include <stdio.h>
#define TAM_MAX 20
int encontrarOcorrencias(float vetor[],int tamanho,float a);
int main(){
    int i,tamanho,resultado;
    float vetor[TAM_MAX],a;
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor em ordem crescente: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%f",&vetor[i]);
    }
    printf("Insira o valor que deseja encontrar: ");
    scanf("%f",&a);
    resultado = encontrarOcorrencias(vetor,tamanho,a);
    printf("Vetor: ");
    for(i=0;i<tamanho;i++){
        printf("%.1f ",vetor[i]);
    }
    if(resultado == tamanho){
        printf("\nO valor %.1f nao foi encontrado no vetor,mas deveria estar na posicao %d\n",a,resultado);
    }else{
    printf("\nO numero %.1f foi encontrado na posicao %d do vetor",a,resultado);
    }
}
int encontrarOcorrencias(float vetor[],int tamanho,float a){
    int i;
    for(i=0;i<tamanho;i++){
        if(vetor[i]==a){
            return i;
        }
    }
     for(i=0;i<tamanho;i++){
        if(vetor[i]> a){
            return i;
        }
    }
    return tamanho;
}