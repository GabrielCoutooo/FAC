/*QUESTÃO 09:
Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).*/
#include <stdio.h>
#define TAM_MAX 20
void adicionarOcorrencia(float vetor[],int *tamanho,float a);
int main(){
    int i,tamanho;
    float vetor[TAM_MAX],a;
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor em ordem crescente: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%f",&vetor[i]);
    }
    printf("Insira o valor que deseja inserir no vetor: ");
    scanf("%f",&a);
    adicionarOcorrencia(vetor,&tamanho,a);
    printf("Vetor Modificado: ");
    for(i=0;i<tamanho;i++){
        printf("%.1f ",vetor[i]);
    }
}
void adicionarOcorrencia(float vetor[],int *tamanho,float a){
    int i,posicao = *tamanho;
    for(i=0;i<*tamanho;i++){
        if(vetor[i]> a){
            posicao = i;
            break;
        }
    }
    for(i = *tamanho;i>posicao;i--){
        vetor[i] = vetor[i-1];
    }
    vetor[posicao] = a;
    (*tamanho)++;
}