/*Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/
#include <stdio.h>

void leituraDados(int *quant,int *maior);

int main(){
    int quant,maior;
    leituraDados(&quant,&maior);
    printf("Foram inseridos %d numeros!",quant);
    printf("\nO maior valor foi: %d \n\n",maior);
}
void leituraDados(int *quant, int *maior){
    float n;
    *maior = 0;
    *quant = 0;
    printf("\nInsira um numero n diferente de 0: ");
    scanf("%f",&n);
    while(n!=0){
        (*quant)++;
        printf("\nInsira um numero n diferente de 0: ");
        scanf("%f",&n);
        if(n> *maior){
            (*maior)=n;
        }
    }
}