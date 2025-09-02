/*Pede-se o desenvolvimento de um programa que leia dois valores inteiros no intervalo de 1 a 999. Caso um deles
não esteja nesta faixa, uma mensagem de erro deverá ser apresentada ao usuário e a execução do programa
finalizada. Caso contrário, o programa deverá exibir a diferença entre os maiores algarismos dos dois números.
Exemplo:
n1 = 281
n2 = 64
Resposta: diferença igual a 2, consistindo em 8 (maior algarismo de n1) menos 6 (maior
algarismo de n2).*/
# include <stdio.h>
int main(){
    int valor1,valor2,diferenca = 0,centena1,dezena1,unidade1,centena2,dezena2,unidade2,maior,menor;
    printf("Insira 2 valores inteiros no intervalo de 1 a 999: ");
    scanf("%d %d",&valor1,&valor2);
    if((valor1 <1 || valor1 > 999) && (valor2<1 || valor2 > 999)){
        printf("Erro: valor invalido!");
    }
    else{
        centena1 = valor1/100;
        dezena1 = (valor1%100)/10;
        unidade1 = valor1%10;

        centena2 = valor2/100;
        dezena2 = (valor2%100)/10;
        unidade2 = valor2%10;

        if(centena1 > dezena1 && centena1 > unidade1 && centena2 > dezena2 && centena2 > unidade2){
            if(centena1 > centena2){
                maior = centena1;
                menor = centena2;
            }else{
                maior = centena2;
                menor = centena1;
            }
            diferenca = maior-menor;
        }
        else{
            if(dezena1 > centena1 && dezena1 > unidade1 && dezena2 > centena2 && dezena2 > unidade2){
            if(dezena1 > dezena2){
                maior = dezena1;
                menor = dezena2;
            }else{
                maior = dezena2;
                menor = dezena1;
            }
            diferenca = maior-menor;
        }
            else
            if(unidade1 > centena1 && unidade1> dezena1 && unidade2 > centena2 && unidade2> dezena2){
            if(unidade1 > unidade2){
                maior = unidade1;
                menor = unidade2;
            }else{
                maior = unidade2;
                menor = unidade1;
            }
            diferenca = maior-menor;
        }
        }
            printf("A diferenca entre os maiores algarismos de %d e %d eh: %d",valor1,valor2,diferenca);
    }
}   