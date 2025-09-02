/*Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.*/
#include <stdio.h>
int main(){
    int num = 1001,contador = 0;
    while(contador < 5){
        if(num % 11 == 5){
            contador++;
        
        if(contador == 5){
            printf("O quinto numero maior que 1000 cuja divisao por 11 tenha resto 5 eh: %d\n",num);
            }
        }
        num++;
    }
}