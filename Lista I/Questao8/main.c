/*Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, considerando que:
a) Devem ser obtidos o nome do hóspede, o
tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede
e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
Tipo de Apartamento Valor da diária
A R$ 350,00
B R$ 275,00
C R$ 200,00
D R$ 150,00
c) O valor da taxa de serviço equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.*/
#include <stdio.h>
int main(){
    char nome[10],tipoApartamento;
    int diarias;
    float consumo,valorDiaria,valorFinalDiarias,taxaServico,subtotal,totalGeral;
    printf("Insira o nome do hospede: ");
    scanf("%s",&nome);
    printf("Insira o tipo do apartamento (A, B, C ou D): ");
    scanf(" %c",&tipoApartamento);
    printf("Insira o numero de diarias utilizadas: ");
    scanf("%d",&diarias);
    printf("Insira o valor do consumo interno: ");
    scanf("%f",&consumo);
    if(tipoApartamento == 'a' || tipoApartamento == 'A'){
        valorDiaria = 350.00;
    } else
    if(tipoApartamento == 'b' || tipoApartamento == 'B'){
        valorDiaria = 275.00;
    }else
    if(tipoApartamento == 'c' || tipoApartamento == 'C'){
        valorDiaria = 200.00;
    } else
    if(tipoApartamento == 'd' || tipoApartamento == 'D'){
        valorDiaria = 150.00;
    }
    valorFinalDiarias= valorDiaria *diarias;
    subtotal = valorFinalDiarias +consumo;
    taxaServico = subtotal *0.1;
    totalGeral = subtotal + taxaServico;
    printf("----------------------------------------------------------------------\n");
    printf("Conta: \n\n");
    printf("Nome: %s\n",nome);
    printf("Tipo de apartamento: %c\n",tipoApartamento);
    printf("Valor total das diarias: R$ %.2f\n",valorFinalDiarias);
    printf("Valor do consumo interno: R$ %.2f\n",consumo);
    printf("Subtotal: R$ %.2f\n",subtotal);
    printf("Valor da taxa de servico: R$ %.2f\n",taxaServico);
    printf("Total geral: R$ %.2f",totalGeral);


}