/*Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada
funcionário deverá responder um
questionário ao qual informará os seguintes
dados: matrícula, gênero, idade, salário e
tempo (em anos) de trabalho na empresa. A
execução do programa deve exibir os
seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo.*/
#include <stdio.h>
#define funcionarios 250
int main(){
    int matricula,matriculaMaisAntigo,MatriculaMaisNovo,idade,i,cont21 = 0,contFeminino = 0,contMasculino = 0;
    char genero;
    float salario,tempo,mediasalarioMasc,somaSalarioM = 0,tempoMaisAntigo = -1,tempoMaisNovo = 999;
    for(i=0;i<funcionarios;i++){
        printf("Insira sua Matricula: ");
        scanf("%d",&matricula);
        printf("Insira seu Gênero (M/F): ");
        fflush (stdin);
        scanf(" %c",&genero);
        genero = toupper(genero);
        printf("Insira sua idade: ");
        scanf("%d",&idade);
        printf("Insira seu salário: ");
        scanf("%f",&salario);
        printf("Insira o tempo de trabalho em anos: ");
        scanf("%f",&tempo);
        if(idade < 21 || idade - tempo < 21){
            cont21++;
        }
        if(genero == 'F'){
            contFeminino++;
        }
        if(genero == 'M'){
            contMasculino++;
            somaSalarioM += salario;
        }
        if(tempo<tempoMaisNovo){
            tempoMaisNovo = tempo;
            MatriculaMaisNovo = matricula;
        }

    }
    if(mediasalarioMasc > 0){
    mediasalarioMasc = somaSalarioM/contMasculino;
    }else{
        mediasalarioMasc = 0;
    }
    printf("Tem %d funcionarios que ingressaram na empresa com menos de 21 anos!",cont21);
    printf("Tem %d funcinarias femininas na empresa");
    printf("A media salarial dos homens e %.2f",mediasalarioMasc);
    printf("A matricula do funcionario mais antigo eh: %d e a do mais novo eh: %d",matriculaMaisAntigo,MatriculaMaisNovo);
}