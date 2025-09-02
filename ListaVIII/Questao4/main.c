/*QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/
#include <stdio.h>
int MDC(int a, int b);

int main(){
    int a, b,resultado;
    printf("Digite os numeros que deseja fazer o MDC: ");
    scanf("%d %d", &a, &b);
    resultado = MDC(a,b);
    printf("O MDC entre %d e %d eh: %d",a,b,resultado);
}
int MDC(int a, int b){
    int i,maior,menor,mdc;
    if (a > b){
        maior = a;
    }else{
        maior = b;
    }
    for(i=1;i<= menor;i++){
        if((a%i == 0) && (b%i == 0)){
            mdc = i;
        }
    }
    return mdc;
}