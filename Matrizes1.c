#include <stdlib.h>
#include <stdio.h>



int main(){

    char nomes [2][200];
    float notas[2][3];
    int contador, coluna;

    for (contador = 0; contador < 2; contador++){
        printf("Digite o nome do aluno: ");
        gets(nomes[contador]);


        for (coluna = 0; coluna < 3; coluna++){
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas [contador][colunas]);
        }
    fflush(stdin)
    }
    system("cls");

    printf("\n \t Exibindo as informações dos alunos: ");


    for (contador = 0; contador < 2; contador++){
        printf("Nome: %s", nomes[contador]);

        for (coluna = 0; coluna < 3; contador++){
            printf("Notas: %.1f", notas[contador][coluna]);
        }
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    return0;

}