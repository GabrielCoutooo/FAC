/*Escreva um algoritmo para calcular o salário
semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/
#include <stdio.h>
int main(){
    float salario,valorhora;
    int horas,horasExtras;
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas);
        printf("Digite o valor da hora trabalhada: ");
        scanf("%f", &valorhora);
    if (horas <= 40) {
        salario = horas * valorhora;
    }else
    horasExtras= horas -40;
    if(horas > 40){
        salario = (horas *valorhora)+(horasExtras*1.5*valorhora);
    }
    printf("O salário semanal é: %.2f",salario);
}