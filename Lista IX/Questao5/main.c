/*Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.Para ilustrar, abaixo é apresentada como a
tabuada de potências de 2 deveria ser exibida:

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512*/
#include <stdio.h>

int tabuada(int n);

int main(){
    int n,resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = tabuada(n);
}

int tabuada(int n){
    int i,resultado = 1;
    if(n >=1 && n<=9){
        printf("%d^0 = 1\n",n);
        for(i = 1;i<=9;i++){
            resultado*=n;
            printf("%d^%d = %d\n",n,i,resultado);
        }
        return 1;
    }else{
        return 0;
    }
}