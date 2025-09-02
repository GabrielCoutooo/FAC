/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4 = 81,
podemos então afirmar que log3 81 = 4.
Generalizando, temos que:
base ^expoente = pot  logbasepot = expoente*/

#include <stdio.h>

int log(int base,int valor);

int main(){
    int base,valor,resultado;
    printf("Digite o valor: ");
    scanf("%d",&valor);
    printf("Digite a base: ");
    scanf("%d",&base);
    resultado = log(base,valor);
    printf("O logaritmo de %d na base %d eh: %d\n\n",valor,base,resultado);
}
int log(int base,int valor){
    int cont = 0,produto = 1;
    while(produto < valor){
        produto *= base;
        cont++;
    }
    
    return cont;
}