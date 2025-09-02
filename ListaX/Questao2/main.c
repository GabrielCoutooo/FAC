/*QUESTÃO 02:
Implementar uma função que, dado um vetor
de reais, troque o 1 e o 2 elementos, em
seguida o 3 e o 4 elementos e assim
sucessivamente, até se chegar ao final do vetor.*/
#include <stdio.h>
void trocarElementos(int vetor[],int tamanho);

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int i,tamanho = 10;
    printf("Vetor Original: ");
    for(i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n\n");
    trocarElementos(vetor,tamanho);
    printf("Vetor Modificado: ");
     for(i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
}

void trocarElementos(int vetor[],int tamanho){
    int i,temp;
    for(i = 0; i<tamanho-1;i+=2){
        temp = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = temp;
    }
}