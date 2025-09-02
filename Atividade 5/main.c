/*Fazer uma função que, dados dois números inteiros num1 e num2, determine se num2 é uma potência de num1.
Nota: apresentar a main chamando a função implementada.*/
#include <stdio.h>
//Protótipo da função
int verificarPotencia(int num1,int num2);

//Main
int main(){
    int num1, num2,resultado;
    printf("Insira o numero 1: ");
    scanf("%d", &num1);
    printf("Insira o numero 2: ");
    scanf("%d", &num2);
    resultado = verificarPotencia(num1,num2);
    if(resultado == 1){
        printf("%d e uma potencia de %d", num2, num1);
    }else{
        printf("%d nao e uma potencia de %d", num2, num1);
    }
}
//Implementação da função
int verificarPotencia(int num1,int num2){
    int resultado = 1;
    while(resultado < num2){
        resultado *=num1;
        if(resultado == num2 || num2 == 1){
            return 1;
        }
    }
    return 0;
}