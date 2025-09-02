/*QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.*/
#include <stdio.h>
int sequencia(int n);

int main(){
    int n,termo;
    printf("Digite o termo da sequencia de Fibonacci que deseja saber: ");
    scanf("%d", &n);
    termo = sequencia(n);
    printf("o enesimo termo da sequencia eh: %d",termo);
}
int sequencia (int n){
    int i,atual,numero1,numero2;
    if(n == 1){
        return 0;
    }
    else{

    
    if( n == 2){
        return 1;
    }
    else{
        numero1 = 0;
        numero2 = 1;
        for(i = 3;i<= n;i++){
            atual = numero1 + numero2;
            numero2 = numero1;
            numero1 = atual;
        }
        return atual;
        }
    }
}