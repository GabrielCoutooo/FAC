//Faça uma função que compare a media entre 2 vetores e diga qual vetor é o maior e retorne na main
#include <stdio.h>
#define TAM 10
//Protótipo das funções
float media(float *vetor, int tamanho);
int compararMedia(float media1, float media2);
//Main
int main(){
    //Declaração de Variaveis
    float vetor1[TAM], vetor2[TAM], media1, media2;
    int i,maior;
    //Entrada de dados
    for(i = 0; i < TAM; i++){
        printf("Digite os valores do vetor 1: ");
        scanf("%f",&vetor1[i]);
        }
        for(i = 0; i < TAM; i++){
            printf("Digite os valores do vetor 2: ");
            scanf("%f",&vetor2[i]);
            }
            //Chamada da função
            media1 = media(vetor1, TAM);
            media2 = media(vetor2, TAM);
            printf("A media do vetor 1 e: %.2f\n", media1);
            printf("A media do vetor 2 e: %.2f\n", media2);
            maior = compararMedia(media1, media2);
            if(maior ==1){
                printf("O vetor 1 e o maior\n");
            } else if (maior ==2){
                printf("O vetor 2 e o maior\n");
            } else{
                printf("Os vetores tem a mesma media\n");
            }
            return 0;
}
//Implementação das funções
int compararMedia(float media1, float media2){
    if(media1 > media2){
        return 1;
    } else if(media1 < media2){
        return 2;
    } else{
        return 0;
    }
}
float media(float *vetor,int tamanho){
    //Declaração de variaveis
    float soma = 0, mediaValores;
    int i;
    //Percorrendo o vetor
    for( i = 0; i < tamanho; i++){
        soma+= vetor[i];
    }
    mediaValores = soma/tamanho;
    return mediaValores;
}