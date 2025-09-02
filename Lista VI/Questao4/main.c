/*A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.*/
#include <stdio.h>
#define habitantes 5
int main(){
    int i, contSalario = 0;
    float salario,mediaSalario,mediafilhos,maiorSalario,Perc1000,numeroFilhos,somaSalario = 0,somaFilhos = 0;
    for(i=1;i<=habitantes;i++){
        printf("Digite o salario do habitante %d: ",i);
        scanf("%f",&salario);
        printf("Insira o numero de filhos do habitante %d: ",i);
        scanf("%f",&numeroFilhos);
        somaSalario+= salario;
        somaFilhos+=numeroFilhos;
        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        if(salario <= 1000){
            contSalario++;
        }
    }
        mediaSalario = somaSalario/habitantes;
        mediafilhos = somaFilhos/habitantes;
        Perc1000 = (contSalario*100)/habitantes;
    printf("A media do salario da populacao eh: %.2f\n",mediaSalario);
    printf("A media de filhos da populacao eh: %.2f\n",mediafilhos);
    printf("O maior salario eh: %.2f\n",maiorSalario);
    printf("O percentual de pessoas com salario ate R$ 1.000,00 eh: %.2f%%\n",Perc1000);
}