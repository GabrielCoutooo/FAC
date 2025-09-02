/*Fazer um programa que auxilie o órgão
regulador no cálculo do total de recursos arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
 O número da carteira de motorista;
 Número de multas;
 Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.*/
#include <stdio.h>
int main(){
    int n,i,carteira,multas,j,carteiraMaiorMulta;
    float valormulta = 0,maiorMulta,somamultas,totalArrecadado;
    printf("Insira o numero de pessoas a serem cadastradas: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        somamultas = 0;
        printf("Insira o numero da carteira de motorista %d: ",i);
        scanf("%d",&carteira);
        printf("Insira o numero de multas: ");
        scanf("%d",&multas);
        printf("Insira o valor de cada multa: \n");
        for(j=1;j<=multas;j++){
            printf("Multa %d: ",j);
            scanf("%f",&valormulta);
            somamultas+= valormulta;
        }
        totalArrecadado+= somamultas;
        if(multas>maiorMulta){
            maiorMulta=multas;
            carteiraMaiorMulta = carteira;

        }
        printf("Motorista %d tem que pagar R$ %.2f de multa!\n",i,somamultas);
    }
    printf("O total arrecadado foi: R$ %.2f! \n",totalArrecadado);
    printf("O motorista com maior numero de multas foi o da carteira: %d\n",carteiraMaiorMulta);
    return 0;
}