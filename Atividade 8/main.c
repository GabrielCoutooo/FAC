/*Considere que um vetor de inteiros armazene o número 0 em algumas de suas posições objetivando “separar
subconjuntos de valores”, como no exemplo a seguir:

5 7 3 0 5 9 0 1 0 3 4 8
0 1 2 3 4 5 6 7 8 9 10 11

Desenvolver uma função que, dados um vetor como definido anteriormente e um número inteiro n, retorne um
vetor contendo o n-ésimo subconjunto do vetor.
Notas:
1. Caso exista o n-ésimo subconjunto, a função retornará, além do subconjunto, o valor 1; caso contrário,
retornará 0.
2. Apresentar a main chamando a função implementada.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int subconjunto(int vetor[],int tamanho,int n,int resultado[],int *tamanhoResultado);

int main(){
    int vetor[TAM],n,resultado,subconj[TAM],tamSubconjunto;
    preencherAleatorio(vetor,TAM,10);
    exibir(vetor,TAM);
    printf("Insira o numero do subconjunto que deseja acessar: ");
    scanf("%d",&n);
    resultado = subconjunto(vetor,TAM,n,subconj,&tamSubconjunto);
    if(resultado == 0){
        printf("Subconjunto invalido! ");
    }
}
void preencherAleatorio (int vetor[], int tamanho, int limite){
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++){
		vetor[i] = rand()%limite;
	}
}

void exibir (int vetor[], int tamanho){
	int i;
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<tamanho;i++){
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
int subconjunto(int vetor[],int tamanho,int n,int resultado[],int *tamanhoResultado){
    int i,contN = 1;
    for(i=0;i<tamanho;i++){
        if(vetor[i]==0){
            contN++;
        }
    }
    if(n > contN){
        return 0;
    }
    return 1;
}