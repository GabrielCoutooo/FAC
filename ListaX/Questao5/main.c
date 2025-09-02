/*QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.*/
#include <stdio.h>
#define TAM 300
void Distribuidor(int vetor[],int tamanho,int vetPar[],int vetImpar[],int *tamPar,int *tamImpar);

int main(){
    int i,vetor[TAM],vetPar[TAM],vetImpar[TAM],tamPar = 0,tamImpar = 0;
    printf("Insira os %d numeros do vetor: ",TAM);
    for(i=0;i<TAM;i++){
        scanf("%d",&vetor[i]);
    }
    Distribuidor(vetor,TAM,vetPar,vetImpar,&tamPar,&tamImpar);
    printf("\nVetor de Pares: ");
    for(i=0;i<tamPar;i++){
        printf("%d ",vetPar[i]);
    }
    printf("\nVetor de Impares: ");
    for(i=0;i<tamImpar;i++){
        printf("%d ",vetImpar[i]);
    }
    printf("\n");
}
void Distribuidor(int vetor[],int tamanho,int vetPar[],int vetImpar[],int *tamPar,int *tamImpar){
    int i;
    for(i=0;i<tamanho;i++){
        if(vetor[i]%2==0){
            vetPar[*tamPar]=vetor[i];
            (*tamPar)++;
        }else{
            vetImpar[*tamImpar]=vetor[i];
            (*tamImpar)++;
        }
    }
}