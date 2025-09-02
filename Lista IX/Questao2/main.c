/*QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.*/
#include <stdio.h>

void numPotencias(int a, int b,int *numeroPotencia,int *maiorPotencia);

int main(){
    int a, b,numeroPotencia,maiorPotencia;
    printf("Insire o valor de A: \n");
    scanf("%d", &a);
    printf("Insire o valor de B: \n");
    scanf("%d", &b);
    numPotencias(a,b,&numeroPotencia,&maiorPotencia);
    printf("O número de potências de 2 no intervalo é: %d\n",numeroPotencia);
    printf("A maior potência de 2 no intervalo é: %d\n",maiorPotencia);
}

void numPotencias(int a,int b,int *numeroPotencia,int *maiorPotencia){
    int potencia = 1;
    while (potencia < a){
        potencia *= 2;
    }
    *numeroPotencia = 0;
    while(potencia <=b){
        (*numeroPotencia)++;
        *maiorPotencia = potencia;
        potencia *=2;
    }

}