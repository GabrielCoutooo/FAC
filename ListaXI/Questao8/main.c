/*Questão 08:
Faça uma função que, dado um vetor de
números inteiros, exiba para cada um de seus
elementos a quantidade de vezes que o mesmo
aparece no vetor.
Exemplo:
Vetor = {3,5,1,3,2,5,7,3,4,7,6,1}
Saída:
3: 3 vezes
5: 2 vezes
1: 2 vezes
2: 1 vez
7: 2 vezes
4: 1 vez
6: 1 vez*/

#include <stdio.h>
#define TAM 10
void contOcorrencias(int vetor[],int tamanho);
int main(){
    int i,vetor[TAM];
    printf("Insira os elementos do vetor de %d numeros: ",TAM);
    for(i=0;i<TAM;i++){
        scanf("%d",&vetor[i]);
    }
    contOcorrencias(vetor,TAM);
}
void contOcorrencias(int vetor[],int tamanho){
    int i,cont;
    int contado[TAM] = {0};
    for(i=0;i<tamanho;i++){
        if(contado[i] == 0){
            cont = 1;
            for(int j=i+1;j<tamanho;j++){
                if(vetor[i] == vetor[j]){
                    cont++;
                    contado[j] = 1;
                }
            }
            printf("%d: %d vez(es)\n",vetor[i],cont);
        }
    }
}