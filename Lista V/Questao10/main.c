/*Foi feita uma pesquisa entre os habitantes
de uma região e coletados os dados de
altura e gênero das pessoas. Faça um
programa que leia as informações de 50
pessoas e informe:
 a maior e a menor alturas
encontradas;
 a média de altura das mulheres;
 a média de altura da população;
 o percentual de homens na
população.*/
#include <stdio.h>
#include <ctype.h>
#define quant 50
int main(){
    int i,contFeminino = 0,contMasculino = 0,totalPessoas = 0;
    float altura, mediaFeminino = 0, mediaMasculino = 0,mediaAlturaGeral = 0, percentualHomens = 0, maiorAltura = 0, menorAltura = 0,somaAlturaMasculino = 0,somaAlturaFeminino = 0;
    char genero;
    for(i=1;i<=quant;i++){
        printf("Digite o genero da pessoa %d (M/F): ",i);
        fflush (stdin);
        scanf(" %c",&genero);
        genero = toupper(genero);
        printf("Digite a altura da pessoa %d: ",i);
        scanf("%f",&altura);
        if(i == 1){
            maiorAltura = altura;
            menorAltura = altura;
        }
        if(altura > maiorAltura){
            maiorAltura = altura;
        }
        else if(altura < menorAltura){
            menorAltura = altura;
        }
        if(genero == 'M'){
            contMasculino++;
            somaAlturaMasculino += altura;
        }
        if(genero == 'F'){
            contFeminino++;
            somaAlturaFeminino += altura;
        }

    }
    if(contFeminino > 0){
        mediaFeminino = somaAlturaFeminino / contFeminino;
    }
        mediaMasculino = somaAlturaMasculino / contMasculino;
        mediaAlturaGeral = mediaFeminino + mediaMasculino;
        totalPessoas = contFeminino + contMasculino;
        percentualHomens = (contMasculino*100)/totalPessoas;
    printf("A media das alturas no sexo Feminino eh: %.2f\n",mediaFeminino);
    printf("A media das alturas no sexo Masculino eh: %.2f\n",mediaMasculino);
    printf("A media das alturas da populacao eh: %.2f\n",mediaAlturaGeral);
    printf("O percentual de homens na populacao eh: %.2f%%\n",percentualHomens);
    printf("A maior altura encontrada foi: %.2f\n",maiorAltura);
    printf("A menor altura encontrada foi: %.2f\n",menorAltura);
}