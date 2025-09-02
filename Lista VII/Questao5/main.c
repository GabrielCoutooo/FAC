/*Uma pesquisa foi feita
coletando informações (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementação de um programa
que proceda com a leitura de tais
informações (até que o usuário opte por
concluir a entrada de dados) e calcule:
 A quantidade de pessoas com idade
superior a 50 anos;
 A média de altura das pessoas com mais de
80 kg;
 O maior peso dentre as pessoas acima de
1.65 m de altura e com idade inferior a 30 anos*/
#include <stdio.h>
int main(){
    int idade,escolha,cont50 = 0,contPeso = 0;
    float altura, peso,maiorPeso, media,somaAlturas = 0;
    do{
        printf("MENU:\n");
        printf("1- Inserir novas informacoes\n");
        printf("2- Finalizar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d",&escolha);
    if(escolha == 1){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o peso em kg: ");
        scanf("%f", &peso);
        if(idade > 50){
            cont50++;
        }
        if(peso > 80){
            contPeso++;
            somaAlturas += altura;
        }
        if(altura > 1.65 && idade < 30){
            if(peso > maiorPeso){
                maiorPeso = peso;
            }
        }
    }
    if(escolha == 2){
        printf("Saindo...\n");
        break;
    }
    else{
        printf("Opcao invalida! Tente novamente\n");
    }
    } while (escolha!=2);
    if(contPeso > 0){
        media = somaAlturas / contPeso;
    }
        printf("A quantidade de pessoas com idade superior a 50 anos eh: %d",cont50);
        printf("A media de altura das pessoas com mais de 80 kg eh: %.2f",media);
        printf("O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos eh: %.2f",maiorPeso);
    return 0;
}