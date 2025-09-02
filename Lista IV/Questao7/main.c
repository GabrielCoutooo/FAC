/*Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.*/
#include <stdio.h>
#include<ctype.h>
#include <locale.h>
int main(){
    char genero, resposta;
    int contGostaram = 0, contNaogostaram = 0, gostouHomem = 0, gostouMulher = 0, x, contHomem = 0, contMulher = 0;
    float PercFeminino, PercMasculino;
    
    printf("Quantas pessoas foram entrevistadas? ");
    scanf("%d", &x);
    
    for(int i = 0; i < x; i++){
        printf("Insira seu genero (M/F): ");
        fflush(stdin);
        scanf(" %c", &genero);
        genero = toupper(genero); // Converte para maiúscula
        
        printf("Insira sua resposta (G se gostou, N se nao gostou): ");
        fflush(stdin);
        scanf(" %c", &resposta);
        resposta = toupper(resposta); // Converte para maiúscula
        
        if(genero == 'F'){  // Verificação correta de igualdade
            contMulher++;
            if(resposta == 'G'){  // Verificação correta de igualdade
                gostouMulher++;
                contGostaram++;
            }
        } else if(genero == 'M'){  // Else para evitar duplicação de lógica
            contHomem++;
            if(resposta == 'G'){
                gostouHomem++;
                contGostaram++;
            }
        }

        if(resposta == 'N'){
            contNaogostaram++;
        }
    }

    if(contHomem > 0){
        PercMasculino = ((float)gostouHomem / contHomem) * 100;
    } else {
        PercMasculino = 0;
    }

    if(contMulher > 0){
        PercFeminino = ((float)gostouMulher / contMulher) * 100;
    } else {
        PercFeminino = 0;
    }

    if(PercMasculino > PercFeminino){
        printf("O produto teve uma melhor aceitacao entre os homens! %d homens gostaram, o que corresponde a %.2f%% dos homens entrevistados.\n", gostouHomem, PercMasculino);
    } else {
        printf("O produto teve uma melhor aceitacao entre as mulheres! %d mulheres gostaram, o que corresponde a %.2f%% das mulheres entrevistadas.\n", gostouMulher, PercFeminino);
    }
    
    printf("%d pessoas gostaram do produto!\n", contGostaram);
    printf("%d pessoas nao gostaram do produto!\n", contNaogostaram);

    return 0;
}