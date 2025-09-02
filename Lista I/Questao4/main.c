/*Um banco concederá um crédito especial aos
seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o
valor do crédito de acordo com a tabela abaixo.
Saldo Médio Percentual
Inferior a R$ 1000,00 nenhum crédito
De R$ 1000,00 a
R$ 1499,99 20% do saldo médio
De R$ 1500,00 a
R$ 2499,99 30% do saldo médio
R$ 2500,00 ou mais 40% do saldo médio*/
#include <stdio.h>

int main(){
    float saldoMedio, percentual, credito;
    printf("Digite o saldo medio: ");
    scanf("%f", &saldoMedio);
    if(saldoMedio <1000){
        printf("Nenhum credito disponível!");
    }else
    if(saldoMedio >1000 && saldoMedio<= 1499.99){
        credito = saldoMedio* 0.2;
    }else
    if(saldoMedio>=1500 && saldoMedio<=2499.99){
        credito = saldoMedio* 0.3;
    }else
    if(saldoMedio>=2500){
        credito = saldoMedio* 0.4;
    }
    printf("O credito disponivel eh de R$ %.2f", credito);
}