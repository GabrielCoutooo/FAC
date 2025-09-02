/*QUESTÃO 06:
Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:(Ver na questao)*/
#include <stdio.h>

int fatorial(int n);
int potencia(int base, int expoente);
float somatorio(int n);


int main(){
    int n,resultado;
    printf("Insira um numero n: ");
    scanf("%d", &n);
    resultado = somatorio(n);
    printf("\n\n Resultado: %d\n\n",resultado);

}
int fatorial(int n){
    int i,resposta =1;
    for(i = 2;i<=n;i++){
        resposta *=i;
    }
    return resposta;
}
int potencia(int base, int expoente){
    int i, resposta = 1;
    for(i = 1; i <= expoente; i++){
        resposta *= base;
    }
    return resposta;
}
float somatorio(int n){
    int i,s=1,parcela;
    for(i=1;i<n;i++){
        parcela=(float)expoente(n-i,i)/fatorial(i);
        s+=parcela;
    }
    return s;
}